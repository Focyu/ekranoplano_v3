#!/bin/bash
# ============================================================
#  Lanzador Gazebo — Ekranoplano v3
#  Ruta repo: ~/Documents/ekranoplano_world/gazebo/
# ============================================================

REPO_DIR="$HOME/Documents/ekranoplano_world/gazebo"
WORLD_FILE="$REPO_DIR/vuelo.world"
GZ_BIN="/opt/ros/jazzy/opt/gz_tools_vendor/bin/gz"

RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'; BLUE='\033[0;34m'; NC='\033[0m'

echo -e "${BLUE}============================================${NC}"
echo -e "${BLUE}   Ekranoplano v3 — Gazebo (ROS2 Jazzy)   ${NC}"
echo -e "${BLUE}============================================${NC}"

# Verificar world file
if [ ! -f "$WORLD_FILE" ]; then
    echo -e "${RED}[ERROR] No se encontró: $WORLD_FILE${NC}"
    read -p "Presiona Enter para cerrar..."; exit 1
fi

# Verificar binario gz
if [ ! -f "$GZ_BIN" ]; then
    echo -e "${RED}[ERROR] gz no encontrado en: $GZ_BIN${NC}"
    echo -e "${YELLOW}Verifica que ROS2 Jazzy está instalado en /opt/ros/jazzy${NC}"
    read -p "Presiona Enter para cerrar..."; exit 1
fi

# Source ROS2 Jazzy
source /opt/ros/jazzy/setup.bash
echo -e "${GREEN}[OK] ROS2 Jazzy activado${NC}"

# Exportar ruta de modelos
export GZ_SIM_RESOURCE_PATH="$REPO_DIR/models:$GZ_SIM_RESOURCE_PATH"
echo -e "${GREEN}[OK] Modelos: $REPO_DIR/models${NC}"

# RMW para compatibilidad MATLAB
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
echo -e "${GREEN}[OK] RMW = rmw_fastrtps_cpp${NC}"

echo -e "${YELLOW}[INFO] Lanzando Gazebo...${NC}"
echo -e "${BLUE}============================================${NC}"

"$GZ_BIN" sim "$WORLD_FILE"

echo -e "${YELLOW}[INFO] Gazebo cerrado.${NC}"
read -p "Presiona Enter para cerrar la terminal..."
