/*
 * pid_control_V3.h
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "pid_control_V3".
 *
 * Model version              : 12.140
 * Simulink Coder version : 25.2 (R2025b) 28-Jul-2025
 * C++ source code generated on : Tue Apr 28 13:56:53 2026
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef pid_control_V3_h_
#define pid_control_V3_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros2_initialize.h"
#include "pid_control_V3_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <string.h>

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Block signals for system '<S281>/Enabled Subsystem' */
struct B_EnabledSubsystem_pid_contro_T {
  SL_Bus_std_msgs_Bool In1;            /* '<S324>/In1' */
};

/* Block signals for system '<S282>/Enabled Subsystem' */
struct B_EnabledSubsystem_pid_cont_d_T {
  SL_Bus_std_msgs_Float64 In1;         /* '<S325>/In1' */
};

/* Block signals (default storage) */
struct B_pid_control_V3_T {
  SL_Bus_ros_gz_interfaces_SetEntityPoseRequest BusAssignment;/* '<Root>/Bus Assignment' */
  real_T IC[12];                       /* '<S9>/IC' */
  real_T x[12];                        /* '<S9>/Integrator' */
  real_T R[9];
  real_T RotationAnglestoDirectionCo[9];
                         /* '<S9>/Rotation Angles to Direction Cosine Matrix' */
  real_T dv[9];
  real_T TmpSignalConversionAtSFunct[5];/* '<S9>/MATLAB Function - MODEL' */
  real_T wbe_b[3];
  real_T FE1_b[3];
  real_T F_b[3];
  real_T Product_m[3];                 /* '<S317>/Product' */
  real_T Dtot[3];
  char_T b_zeroDelimTopic[22];
  char_T b_zeroDelimTopic_c[22];
  char_T b_zeroDelimTopic_k[22];
  char_T b_zeroDelimTopic_cx[17];
  char_T b_zeroDelimTopic_b[17];
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF deadline_p;
  real_T w_e[2];                       /* '<S301>/w ' */
  real_T w1[2];                        /* '<S301>/w 1' */
  real_T w_n[2];                       /* '<S300>/w' */
  real_T w1_c[2];                      /* '<S300>/w1' */
  real_T w_d[2];                       /* '<S299>/w' */
  real_T w_e0[2];                      /* '<S298>/w' */
  real_T UnaryMinus[2];                /* '<S298>/Unary Minus' */
  real_T w_o[2];                       /* '<S297>/w' */
  real_T sigma_w[2];                   /* '<S297>/sigma_w' */
  real_T frac[2];
  real_T dv1[2];
  real_T Switch3;                      /* '<Root>/Switch3' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T FilterCoefficient;            /* '<S103>/Filter Coefficient' */
  real_T Saturation;                   /* '<S107>/Saturation' */
  real_T Switch2;                      /* '<Root>/Switch2' */
  real_T FilterCoefficient_p;          /* '<S207>/Filter Coefficient' */
  real_T Saturation_m;                 /* '<S211>/Saturation' */
  real_T FilterCoefficient_c;          /* '<S51>/Filter Coefficient' */
  real_T Saturation_k;                 /* '<S55>/Saturation' */
  real_T Saturation_i;                 /* '<Root>/Saturation' */
  real_T RateLimiter;                  /* '<Root>/Rate Limiter' */
  real_T FilterCoefficient_m;          /* '<S155>/Filter Coefficient' */
  real_T Saturation_f;                 /* '<S159>/Saturation' */
  real_T FilterCoefficient_cv;         /* '<S261>/Filter Coefficient' */
  real_T Saturation_o;                 /* '<S265>/Saturation' */
  real_T Memory[3];                    /* '<S9>/Memory' */
  real_T Memory1[3];                   /* '<S9>/Memory1' */
  real_T Switch;                       /* '<S38>/Switch' */
  real_T SumI4;                        /* '<S92>/SumI4' */
  real_T SumI4_i;                      /* '<S144>/SumI4' */
  real_T IntegralGain;                 /* '<S201>/Integral Gain' */
  real_T Switch_j;                     /* '<S248>/Switch' */
  real_T Product[4];                   /* '<S296>/Product' */
  real_T Switch_p[3];                  /* '<S9>/Switch' */
  real_T Switch1[3];                   /* '<S9>/Switch1' */
  real_T data;
  real_T data_n;
  real_T Power;                        /* '<S9>/Product2' */
  real_T Gain3;                        /* '<S9>/Gain3' */
  real_T EnergykWh;                    /* '<S9>/Gain1' */
  real_T powerdemand;                  /* '<S9>/Divide' */
  real_T loadtorque;                   /* '<S9>/Divide1' */
  real_T Output;                       /* '<S276>/Output' */
  real_T Sum[3];                       /* '<S9>/Sum' */
  real_T Sum1[3];                      /* '<S9>/Sum1' */
  real_T XDOT[40];                     /* '<S9>/MATLAB Function - MODEL' */
  real_T CL_total;                     /* '<S9>/MATLAB Function - MODEL' */
  real_T mu_Lw_out;                    /* '<S9>/MATLAB Function - MODEL' */
  real_T mu_Dw_out;                    /* '<S9>/MATLAB Function - MODEL' */
  real_T w[2];                         /* '<S302>/w' */
  real_T w_a[2];                       /* '<S302>/w ' */
  real_T LwgV1[2];                     /* '<S302>/Lwg//V 1' */
  real_T w_g[2];                       /* '<S301>/w' */
  real_T u1;
  real_T u2;
  real_T w_r;
  real_T Va;
  real_T beta;
  real_T q_aero;
  real_T hw;
  real_T hh;
  real_T Q;
  real_T CL_w_IGE;
  real_T CL_h_IGE;
  real_T CD_iw_IGE;
  real_T CD_ih_IGE;
  real_T Dtot_c;
  real_T Ltot;
  real_T CQ;
  real_T Cl;
  real_T Vd1;
  real_T c_phi;
  real_T c_the;
  real_T s_the;
  real_T c_psi;
  real_T s_psi;
  real_T Sum2_l;                       /* '<Root>/Sum2' */
  real_T Sum_b;                        /* '<S109>/Sum' */
  real_T Sum5;                         /* '<Root>/Sum5' */
  real_T SignPreSat_a;                 /* '<S38>/SignPreSat' */
  real_T Sum1_g;                       /* '<Root>/Sum1' */
  real_T Sum_hl;                       /* '<S161>/Sum' */
  real_T SignPreSat;                   /* '<S248>/SignPreSat' */
  real_T FE_b;
  real_T Mcg_b_idx_0;
  real_T FE2_b_idx_0;
  real_T FE2_b_idx_2;
  real_T Fg_b_idx_2;
  real_T FE_b_idx_0;
  real_T FA_b_idx_0;
  real_T FA_b_idx_1;
  real_T FA_b_idx_2;
  real_T R_tmp;
  real_T R_tmp_f;
  real_T Ltot_tmp;
  SL_Bus_std_msgs_Float64 SourceBlock_o2_k;/* '<S283>/SourceBlock' */
  SL_Bus_std_msgs_Float64 SourceBlock_o2_p;/* '<S282>/SourceBlock' */
  uint32_T bpIndex[2];
  uint32_T entityNameLen;           /* '<Root>/MATLAB Function-getEntityInfo' */
  uint8_T entityName[128];          /* '<Root>/MATLAB Function-getEntityInfo' */
  uint8_T entityType;               /* '<Root>/MATLAB Function-getEntityInfo' */
  boolean_T Compare;                   /* '<S277>/Compare' */
  boolean_T AND3;                      /* '<S38>/AND3' */
  boolean_T Memory_a;                  /* '<S38>/Memory' */
  boolean_T AND3_c;                    /* '<S248>/AND3' */
  boolean_T Memory_h;                  /* '<S248>/Memory' */
  boolean_T SourceBlock_o1;            /* '<S11>/SourceBlock' */
  boolean_T SourceBlock_o1_o;          /* '<S10>/SourceBlock' */
  boolean_T SourceBlock_o1_h;          /* '<S284>/SourceBlock' */
  boolean_T SourceBlock_o1_d;          /* '<S283>/SourceBlock' */
  boolean_T SourceBlock_o1_c;          /* '<S282>/SourceBlock' */
  boolean_T SourceBlock_o1_k;          /* '<S281>/SourceBlock' */
  B_EnabledSubsystem_pid_cont_d_T EnabledSubsystem_a;/* '<S11>/Enabled Subsystem' */
  B_EnabledSubsystem_pid_cont_d_T EnabledSubsystem_b;/* '<S10>/Enabled Subsystem' */
  B_EnabledSubsystem_pid_contro_T EnabledSubsystem_pt;/* '<S284>/Enabled Subsystem' */
  B_EnabledSubsystem_pid_cont_d_T EnabledSubsystem_p;/* '<S283>/Enabled Subsystem' */
  B_EnabledSubsystem_pid_cont_d_T EnabledSubsystem_k;/* '<S282>/Enabled Subsystem' */
  B_EnabledSubsystem_pid_contro_T EnabledSubsystem;/* '<S281>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_pid_control_V3_T {
  ros_slros2_internal_block_Ser_T obj; /* '<S2>/ServiceCaller' */
  ros_slros2_internal_block_Sub_T obj_k;/* '<S11>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_m;/* '<S10>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_h;/* '<S284>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_p;/* '<S283>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_hy;/* '<S282>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_h4;/* '<S281>/SourceBlock' */
  real_T UnitDelay3_DSTATE;            /* '<Root>/Unit Delay3' */
  real_T UnitDelay2_DSTATE;            /* '<Root>/Unit Delay2' */
  real_T Memory2_PreviousInput[12];    /* '<S9>/Memory2' */
  real_T PrevY;                        /* '<Root>/Rate Limiter' */
  real_T LastMajorTime;                /* '<Root>/Rate Limiter' */
  real_T Memory_PreviousInput[3];      /* '<S9>/Memory' */
  real_T Memory1_PreviousInput[3];     /* '<S9>/Memory1' */
  real_T NextOutput[4];                /* '<S296>/White Noise' */
  real_T NextOutput_k;                 /* '<S276>/White Noise' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_g;               /* '<S9>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S9>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               /* '<S9>/To Workspace10' */

  struct {
    void *LoggedData;
  } ToWorkspace11_PWORK;               /* '<S9>/To Workspace11' */

  struct {
    void *LoggedData;
  } ToWorkspace12_PWORK;               /* '<S9>/To Workspace12' */

  struct {
    void *LoggedData;
  } ToWorkspace13_PWORK;               /* '<S9>/To Workspace13' */

  struct {
    void *LoggedData;
  } ToWorkspace14_PWORK;               /* '<S9>/To Workspace14' */

  struct {
    void *LoggedData;
  } ToWorkspace15_PWORK;               /* '<S9>/To Workspace15' */

  struct {
    void *LoggedData;
  } ToWorkspace16_PWORK;               /* '<S9>/To Workspace16' */

  struct {
    void *LoggedData;
  } ToWorkspace17_PWORK;               /* '<S9>/To Workspace17' */

  struct {
    void *LoggedData;
  } ToWorkspace18_PWORK;               /* '<S9>/To Workspace18' */

  struct {
    void *LoggedData;
  } ToWorkspace19_PWORK;               /* '<S9>/To Workspace19' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S9>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace20_PWORK;               /* '<S9>/To Workspace20' */

  struct {
    void *LoggedData;
  } ToWorkspace21_PWORK;               /* '<S9>/To Workspace21' */

  struct {
    void *LoggedData;
  } ToWorkspace22_PWORK;               /* '<S9>/To Workspace22' */

  struct {
    void *LoggedData;
  } ToWorkspace23_PWORK;               /* '<S9>/To Workspace23' */

  struct {
    void *LoggedData;
  } ToWorkspace24_PWORK;               /* '<S9>/To Workspace24' */

  struct {
    void *LoggedData;
  } ToWorkspace25_PWORK;               /* '<S9>/To Workspace25' */

  struct {
    void *LoggedData;
  } ToWorkspace26_PWORK;               /* '<S9>/To Workspace26' */

  struct {
    void *LoggedData;
  } ToWorkspace27_PWORK;               /* '<S9>/To Workspace27' */

  struct {
    void *LoggedData;
  } ToWorkspace28_PWORK;               /* '<S9>/To Workspace28' */

  struct {
    void *LoggedData;
  } ToWorkspace29_PWORK;               /* '<S9>/To Workspace29' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S9>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace30_PWORK;               /* '<S9>/To Workspace30' */

  struct {
    void *LoggedData;
  } ToWorkspace31_PWORK;               /* '<S9>/To Workspace31' */

  struct {
    void *LoggedData;
  } ToWorkspace32_PWORK;               /* '<S9>/To Workspace32' */

  struct {
    void *LoggedData;
  } ToWorkspace33_PWORK;               /* '<S9>/To Workspace33' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S9>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S9>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S9>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<S9>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                /* '<S9>/To Workspace8' */

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                /* '<S9>/To Workspace9' */

  uint32_T PreLookUpIndexSearchprobofexcee;
                        /* '<S303>/PreLook-Up Index Search  (prob of exceed)' */
  uint32_T PreLookUpIndexSearchaltitude_DW;
                              /* '<S303>/PreLook-Up Index Search  (altitude)' */
  uint32_T RandSeed[4];                /* '<S296>/White Noise' */
  uint32_T RandSeed_a;                 /* '<S276>/White Noise' */
  robotics_slcore_internal_bloc_T obj_c;
                             /* '<Root>/Coordinate Transformation Conversion' */
  int8_T ifHeightMaxlowaltitudeelseifHei;
  /* '<S292>/if Height < Max low altitude  elseif Height > Min isotropic altitude ' */
  int8_T ifHeightMaxlowaltitudeelseifH_a;
  /* '<S291>/if Height < Max low altitude  elseif Height > Min isotropic altitude ' */
  boolean_T IC_FirstOutputTime;        /* '<S9>/IC' */
  boolean_T Integrator_DWORK1;         /* '<S9>/Integrator' */
  boolean_T PrevLimited;               /* '<Root>/Rate Limiter' */
  boolean_T Memory_PreviousInput_o;    /* '<S38>/Memory' */
  boolean_T Memory_PreviousInput_a;    /* '<S248>/Memory' */
  boolean_T objisempty;                /* '<S11>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S10>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S284>/SourceBlock' */
  boolean_T objisempty_e;              /* '<S283>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S282>/SourceBlock' */
  boolean_T objisempty_c;              /* '<S281>/SourceBlock' */
  boolean_T objisempty_d;    /* '<Root>/Coordinate Transformation Conversion' */
  boolean_T objisempty_f;              /* '<S2>/ServiceCaller' */
  boolean_T Hwgws_MODE;                /* '<S287>/Hwgw(s)' */
  boolean_T Hvgws_MODE;                /* '<S287>/Hvgw(s)' */
  boolean_T Hugws_MODE;                /* '<S287>/Hugw(s)' */
  boolean_T Hrgw_MODE;                 /* '<S286>/Hrgw' */
  boolean_T Hqgw_MODE;                 /* '<S286>/Hqgw' */
  boolean_T Hpgw_MODE;                 /* '<S286>/Hpgw' */
};

/* Continuous states (default storage) */
struct X_pid_control_V3_T {
  real_T Integrator_CSTATE[12];        /* '<S9>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S100>/Integrator' */
  real_T Filter_CSTATE;                /* '<S95>/Filter' */
  real_T Integrator_CSTATE_d;          /* '<S204>/Integrator' */
  real_T Filter_CSTATE_f;              /* '<S199>/Filter' */
  real_T Integrator_CSTATE_m;          /* '<S48>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S43>/Filter' */
  real_T Integrator_CSTATE_p;          /* '<S152>/Integrator' */
  real_T Filter_CSTATE_m;              /* '<S147>/Filter' */
  real_T Integrator_CSTATE_f;          /* '<S258>/Integrator' */
  real_T Filter_CSTATE_l;              /* '<S253>/Filter' */
  real_T Integrator1_CSTATE;           /* '<S9>/Integrator1' */
  real_T TransferFcn_CSTATE[2];        /* '<S9>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S9>/Transfer Fcn1' */
  real_T wg_p1_CSTATE[2];              /* '<S302>/wg_p1' */
  real_T wg_p2_CSTATE[2];              /* '<S302>/wg_p2' */
  real_T vg_p1_CSTATE[2];              /* '<S301>/vg_p1' */
  real_T vgw_p2_CSTATE[2];             /* '<S301>/vgw_p2' */
  real_T ug_p_CSTATE[2];               /* '<S300>/ug_p' */
  real_T rgw_p_CSTATE[2];              /* '<S299>/rgw_p' */
  real_T qgw_p_CSTATE[2];              /* '<S298>/qgw_p' */
  real_T pgw_p_CSTATE[2];              /* '<S297>/pgw_p' */
};

/* State derivatives (default storage) */
struct XDot_pid_control_V3_T {
  real_T Integrator_CSTATE[12];        /* '<S9>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S100>/Integrator' */
  real_T Filter_CSTATE;                /* '<S95>/Filter' */
  real_T Integrator_CSTATE_d;          /* '<S204>/Integrator' */
  real_T Filter_CSTATE_f;              /* '<S199>/Filter' */
  real_T Integrator_CSTATE_m;          /* '<S48>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S43>/Filter' */
  real_T Integrator_CSTATE_p;          /* '<S152>/Integrator' */
  real_T Filter_CSTATE_m;              /* '<S147>/Filter' */
  real_T Integrator_CSTATE_f;          /* '<S258>/Integrator' */
  real_T Filter_CSTATE_l;              /* '<S253>/Filter' */
  real_T Integrator1_CSTATE;           /* '<S9>/Integrator1' */
  real_T TransferFcn_CSTATE[2];        /* '<S9>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S9>/Transfer Fcn1' */
  real_T wg_p1_CSTATE[2];              /* '<S302>/wg_p1' */
  real_T wg_p2_CSTATE[2];              /* '<S302>/wg_p2' */
  real_T vg_p1_CSTATE[2];              /* '<S301>/vg_p1' */
  real_T vgw_p2_CSTATE[2];             /* '<S301>/vgw_p2' */
  real_T ug_p_CSTATE[2];               /* '<S300>/ug_p' */
  real_T rgw_p_CSTATE[2];              /* '<S299>/rgw_p' */
  real_T qgw_p_CSTATE[2];              /* '<S298>/qgw_p' */
  real_T pgw_p_CSTATE[2];              /* '<S297>/pgw_p' */
};

/* State disabled  */
struct XDis_pid_control_V3_T {
  boolean_T Integrator_CSTATE[12];     /* '<S9>/Integrator' */
  boolean_T Integrator_CSTATE_n;       /* '<S100>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S95>/Filter' */
  boolean_T Integrator_CSTATE_d;       /* '<S204>/Integrator' */
  boolean_T Filter_CSTATE_f;           /* '<S199>/Filter' */
  boolean_T Integrator_CSTATE_m;       /* '<S48>/Integrator' */
  boolean_T Filter_CSTATE_g;           /* '<S43>/Filter' */
  boolean_T Integrator_CSTATE_p;       /* '<S152>/Integrator' */
  boolean_T Filter_CSTATE_m;           /* '<S147>/Filter' */
  boolean_T Integrator_CSTATE_f;       /* '<S258>/Integrator' */
  boolean_T Filter_CSTATE_l;           /* '<S253>/Filter' */
  boolean_T Integrator1_CSTATE;        /* '<S9>/Integrator1' */
  boolean_T TransferFcn_CSTATE[2];     /* '<S9>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<S9>/Transfer Fcn1' */
  boolean_T wg_p1_CSTATE[2];           /* '<S302>/wg_p1' */
  boolean_T wg_p2_CSTATE[2];           /* '<S302>/wg_p2' */
  boolean_T vg_p1_CSTATE[2];           /* '<S301>/vg_p1' */
  boolean_T vgw_p2_CSTATE[2];          /* '<S301>/vgw_p2' */
  boolean_T ug_p_CSTATE[2];            /* '<S300>/ug_p' */
  boolean_T rgw_p_CSTATE[2];           /* '<S299>/rgw_p' */
  boolean_T qgw_p_CSTATE[2];           /* '<S298>/qgw_p' */
  boolean_T pgw_p_CSTATE[2];           /* '<S297>/pgw_p' */
};

/* Zero-crossing (trigger) state */
struct PrevZCX_pid_control_V3_T {
  ZCSigState Integrator_Reset_ZCE;     /* '<S9>/Integrator' */
};

/* Invariant block signals (default storage) */
struct ConstB_pid_control_V3_T {
  real_T UnitConversion;               /* '<S285>/Unit Conversion' */
  real_T UnitConversion_k;             /* '<S295>/Unit Conversion' */
  real_T sigma_wg;                     /* '<S304>/sigma_wg ' */
  real_T UnitConversion_n;             /* '<S289>/Unit Conversion' */
  real_T UnitConversion_c;             /* '<S323>/Unit Conversion' */
  real_T PreLookUpIndexSearchprobofe;
                        /* '<S303>/PreLook-Up Index Search  (prob of exceed)' */
  real_T Sqrt[4];                      /* '<S296>/Sqrt' */
  real_T Sqrt1;                        /* '<S296>/Sqrt1' */
  real_T Divide[4];                    /* '<S296>/Divide' */
  real_T motorspeed;                   /* '<S9>/Gain2' */
  real_T Sum;                          /* '<S313>/Sum' */
  real_T Sum_a;                        /* '<S305>/Sum' */
  real_T sqrt_a;                       /* '<S302>/sqrt' */
  real_T w4;                           /* '<S297>/w4' */
  real_T u16;                          /* '<S297>/u^1//6' */
  uint32_T PreLookUpIndexSearchprobo_g;
                        /* '<S303>/PreLook-Up Index Search  (prob of exceed)' */
};

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
struct ODE3_IntgData {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
};

#endif

/* Constant parameters (default storage) */
struct ConstP_pid_control_V3_T {
  /* Pooled Parameter (Expression: x_nom)
   * Referenced by:
   *   '<S9>/IC'
   *   '<S9>/Memory2'
   */
  real_T pooled10[12];

  /* Expression: h_vec
   * Referenced by: '<S303>/PreLook-Up Index Search  (altitude)'
   */
  real_T PreLookUpIndexSearchaltitude_Br[12];

  /* Expression: sigma_vec'
   * Referenced by: '<S303>/Medium//High Altitude Intensity'
   */
  real_T MediumHighAltitudeIntensity_Tab[84];

  /* Computed Parameter: MediumHighAltitudeIntensity_max
   * Referenced by: '<S303>/Medium//High Altitude Intensity'
   */
  uint32_T MediumHighAltitudeIntensity_max[2];
};

/* Real-time Model Data Structure */
struct tag_RTM_pid_control_V3_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_pid_control_V3_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_pid_control_V3_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[42];
  real_T odeF[3][42];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    boolean_T firstInitCondFlag;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

extern const ConstB_pid_control_V3_T pid_control_V3_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_pid_control_V3_T pid_control_V3_ConstP;

/* Class declaration for model pid_control_V3 */
class pid_control_V3
{
  /* public data and function members */
 public:
  /* Real-Time Model get method */
  RT_MODEL_pid_control_V3_T * getRTM();
  void ModelPrevZCStateInit();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  pid_control_V3();

  /* Destructor */
  ~pid_control_V3();

  /* private data and function members */
 private:
  /* Block signals */
  B_pid_control_V3_T pid_control_V3_B;

  /* Block states */
  DW_pid_control_V3_T pid_control_V3_DW;

  /* Block continuous states */
  X_pid_control_V3_T pid_control_V3_X;

  /* Block Continuous state disabled vector */
  XDis_pid_control_V3_T pid_control_V3_XDis;

  /* Triggered events */
  PrevZCX_pid_control_V3_T pid_control_V3_PrevZCX;

  /* private member function(s) for subsystem '<S281>/Enabled Subsystem'*/
  static void pid_contr_EnabledSubsystem_Init(B_EnabledSubsystem_pid_contro_T
    *localB);
  static void pid_control_V3_EnabledSubsystem(boolean_T rtu_Enable, const
    SL_Bus_std_msgs_Bool *rtu_In1, B_EnabledSubsystem_pid_contro_T *localB);

  /* private member function(s) for subsystem '<S282>/Enabled Subsystem'*/
  static void pid_con_EnabledSubsystem_i_Init(B_EnabledSubsystem_pid_cont_d_T
    *localB);
  static void pid_control__EnabledSubsystem_k(boolean_T rtu_Enable, const
    SL_Bus_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_pid_cont_d_T *localB);

  /* private member function(s) for subsystem '<Root>'*/
  void pid_c_Subscriber_setupImpl_eg11(const ros_slros2_internal_block_Sub_T
    *obj);
  void pid__Subscriber_setupImpl_eg11g(const ros_slros2_internal_block_Sub_T
    *obj);
  void pid_con_ServiceCaller_setupImpl(const ros_slros2_internal_block_Ser_T
    *obj);
  void pid_co_Subscriber_setupImpl_eg1(const ros_slros2_internal_block_Sub_T
    *obj);
  void pid_contro_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);
  void pid_cont_Subscriber_setupImpl_e(const ros_slros2_internal_block_Sub_T
    *obj);
  void pid_con_Subscriber_setupImpl_eg(const ros_slros2_internal_block_Sub_T
    *obj);

  /* Global mass matrix */

  /* Continuous states update member function*/
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  /* Derivatives member function */
  void pid_control_V3_derivatives();

  /* Real-Time Model */
  RT_MODEL_pid_control_V3_T pid_control_V3_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Gain5' : Eliminated nontunable gain of 1
 * Block '<S144>/Kb' : Eliminated nontunable gain of 1
 * Block '<S278>/Cast' : Eliminate redundant data type conversion
 * Block '<S278>/Cast To Double' : Eliminate redundant data type conversion
 * Block '<S278>/Cast To Double1' : Eliminate redundant data type conversion
 * Block '<S278>/Cast To Double2' : Eliminate redundant data type conversion
 * Block '<S278>/Cast To Double3' : Eliminate redundant data type conversion
 * Block '<S278>/Cast To Double4' : Eliminate redundant data type conversion
 * Block '<S309>/Reshape' : Reshape block reduction
 * Block '<S309>/Reshape1' : Reshape block reduction
 * Block '<S311>/Reshape' : Reshape block reduction
 * Block '<S317>/Reshape' : Reshape block reduction
 * Block '<S317>/Reshape1' : Reshape block reduction
 * Block '<S319>/Reshape' : Reshape block reduction
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'pid_control_V3'
 * '<S1>'   : 'pid_control_V3/Blank Message'
 * '<S2>'   : 'pid_control_V3/Call Service'
 * '<S3>'   : 'pid_control_V3/MATLAB Function-getEntityInfo'
 * '<S4>'   : 'pid_control_V3/PID ALERON'
 * '<S5>'   : 'pid_control_V3/PID ALTURA'
 * '<S6>'   : 'pid_control_V3/PID PITCH//ELEVATOR'
 * '<S7>'   : 'pid_control_V3/PID TIIMON'
 * '<S8>'   : 'pid_control_V3/PID VELOCIDAD'
 * '<S9>'   : 'pid_control_V3/SUBSYSTEM_MODEL'
 * '<S10>'  : 'pid_control_V3/Subscribe-ALTURA1'
 * '<S11>'  : 'pid_control_V3/Subscribe-YAW'
 * '<S12>'  : 'pid_control_V3/PID ALERON/Anti-windup'
 * '<S13>'  : 'pid_control_V3/PID ALERON/D Gain'
 * '<S14>'  : 'pid_control_V3/PID ALERON/External Derivative'
 * '<S15>'  : 'pid_control_V3/PID ALERON/Filter'
 * '<S16>'  : 'pid_control_V3/PID ALERON/Filter ICs'
 * '<S17>'  : 'pid_control_V3/PID ALERON/I Gain'
 * '<S18>'  : 'pid_control_V3/PID ALERON/Ideal P Gain'
 * '<S19>'  : 'pid_control_V3/PID ALERON/Ideal P Gain Fdbk'
 * '<S20>'  : 'pid_control_V3/PID ALERON/Integrator'
 * '<S21>'  : 'pid_control_V3/PID ALERON/Integrator ICs'
 * '<S22>'  : 'pid_control_V3/PID ALERON/N Copy'
 * '<S23>'  : 'pid_control_V3/PID ALERON/N Gain'
 * '<S24>'  : 'pid_control_V3/PID ALERON/P Copy'
 * '<S25>'  : 'pid_control_V3/PID ALERON/Parallel P Gain'
 * '<S26>'  : 'pid_control_V3/PID ALERON/Reset Signal'
 * '<S27>'  : 'pid_control_V3/PID ALERON/Saturation'
 * '<S28>'  : 'pid_control_V3/PID ALERON/Saturation Fdbk'
 * '<S29>'  : 'pid_control_V3/PID ALERON/Sum'
 * '<S30>'  : 'pid_control_V3/PID ALERON/Sum Fdbk'
 * '<S31>'  : 'pid_control_V3/PID ALERON/Tracking Mode'
 * '<S32>'  : 'pid_control_V3/PID ALERON/Tracking Mode Sum'
 * '<S33>'  : 'pid_control_V3/PID ALERON/Tsamp - Integral'
 * '<S34>'  : 'pid_control_V3/PID ALERON/Tsamp - Ngain'
 * '<S35>'  : 'pid_control_V3/PID ALERON/postSat Signal'
 * '<S36>'  : 'pid_control_V3/PID ALERON/preInt Signal'
 * '<S37>'  : 'pid_control_V3/PID ALERON/preSat Signal'
 * '<S38>'  : 'pid_control_V3/PID ALERON/Anti-windup/Cont. Clamping Parallel'
 * '<S39>'  : 'pid_control_V3/PID ALERON/Anti-windup/Cont. Clamping Parallel/Dead Zone'
 * '<S40>'  : 'pid_control_V3/PID ALERON/Anti-windup/Cont. Clamping Parallel/Dead Zone/Enabled'
 * '<S41>'  : 'pid_control_V3/PID ALERON/D Gain/Internal Parameters'
 * '<S42>'  : 'pid_control_V3/PID ALERON/External Derivative/Error'
 * '<S43>'  : 'pid_control_V3/PID ALERON/Filter/Cont. Filter'
 * '<S44>'  : 'pid_control_V3/PID ALERON/Filter ICs/Internal IC - Filter'
 * '<S45>'  : 'pid_control_V3/PID ALERON/I Gain/Internal Parameters'
 * '<S46>'  : 'pid_control_V3/PID ALERON/Ideal P Gain/Passthrough'
 * '<S47>'  : 'pid_control_V3/PID ALERON/Ideal P Gain Fdbk/Disabled'
 * '<S48>'  : 'pid_control_V3/PID ALERON/Integrator/Continuous'
 * '<S49>'  : 'pid_control_V3/PID ALERON/Integrator ICs/Internal IC'
 * '<S50>'  : 'pid_control_V3/PID ALERON/N Copy/Disabled'
 * '<S51>'  : 'pid_control_V3/PID ALERON/N Gain/Internal Parameters'
 * '<S52>'  : 'pid_control_V3/PID ALERON/P Copy/Disabled'
 * '<S53>'  : 'pid_control_V3/PID ALERON/Parallel P Gain/Internal Parameters'
 * '<S54>'  : 'pid_control_V3/PID ALERON/Reset Signal/Disabled'
 * '<S55>'  : 'pid_control_V3/PID ALERON/Saturation/Enabled'
 * '<S56>'  : 'pid_control_V3/PID ALERON/Saturation Fdbk/Disabled'
 * '<S57>'  : 'pid_control_V3/PID ALERON/Sum/Sum_PID'
 * '<S58>'  : 'pid_control_V3/PID ALERON/Sum Fdbk/Disabled'
 * '<S59>'  : 'pid_control_V3/PID ALERON/Tracking Mode/Disabled'
 * '<S60>'  : 'pid_control_V3/PID ALERON/Tracking Mode Sum/Passthrough'
 * '<S61>'  : 'pid_control_V3/PID ALERON/Tsamp - Integral/TsSignalSpecification'
 * '<S62>'  : 'pid_control_V3/PID ALERON/Tsamp - Ngain/Passthrough'
 * '<S63>'  : 'pid_control_V3/PID ALERON/postSat Signal/Forward_Path'
 * '<S64>'  : 'pid_control_V3/PID ALERON/preInt Signal/Internal PreInt'
 * '<S65>'  : 'pid_control_V3/PID ALERON/preSat Signal/Forward_Path'
 * '<S66>'  : 'pid_control_V3/PID ALTURA/Anti-windup'
 * '<S67>'  : 'pid_control_V3/PID ALTURA/D Gain'
 * '<S68>'  : 'pid_control_V3/PID ALTURA/External Derivative'
 * '<S69>'  : 'pid_control_V3/PID ALTURA/Filter'
 * '<S70>'  : 'pid_control_V3/PID ALTURA/Filter ICs'
 * '<S71>'  : 'pid_control_V3/PID ALTURA/I Gain'
 * '<S72>'  : 'pid_control_V3/PID ALTURA/Ideal P Gain'
 * '<S73>'  : 'pid_control_V3/PID ALTURA/Ideal P Gain Fdbk'
 * '<S74>'  : 'pid_control_V3/PID ALTURA/Integrator'
 * '<S75>'  : 'pid_control_V3/PID ALTURA/Integrator ICs'
 * '<S76>'  : 'pid_control_V3/PID ALTURA/N Copy'
 * '<S77>'  : 'pid_control_V3/PID ALTURA/N Gain'
 * '<S78>'  : 'pid_control_V3/PID ALTURA/P Copy'
 * '<S79>'  : 'pid_control_V3/PID ALTURA/Parallel P Gain'
 * '<S80>'  : 'pid_control_V3/PID ALTURA/Reset Signal'
 * '<S81>'  : 'pid_control_V3/PID ALTURA/Saturation'
 * '<S82>'  : 'pid_control_V3/PID ALTURA/Saturation Fdbk'
 * '<S83>'  : 'pid_control_V3/PID ALTURA/Sum'
 * '<S84>'  : 'pid_control_V3/PID ALTURA/Sum Fdbk'
 * '<S85>'  : 'pid_control_V3/PID ALTURA/Tracking Mode'
 * '<S86>'  : 'pid_control_V3/PID ALTURA/Tracking Mode Sum'
 * '<S87>'  : 'pid_control_V3/PID ALTURA/Tsamp - Integral'
 * '<S88>'  : 'pid_control_V3/PID ALTURA/Tsamp - Ngain'
 * '<S89>'  : 'pid_control_V3/PID ALTURA/postSat Signal'
 * '<S90>'  : 'pid_control_V3/PID ALTURA/preInt Signal'
 * '<S91>'  : 'pid_control_V3/PID ALTURA/preSat Signal'
 * '<S92>'  : 'pid_control_V3/PID ALTURA/Anti-windup/Back Calculation'
 * '<S93>'  : 'pid_control_V3/PID ALTURA/D Gain/Internal Parameters'
 * '<S94>'  : 'pid_control_V3/PID ALTURA/External Derivative/Error'
 * '<S95>'  : 'pid_control_V3/PID ALTURA/Filter/Cont. Filter'
 * '<S96>'  : 'pid_control_V3/PID ALTURA/Filter ICs/Internal IC - Filter'
 * '<S97>'  : 'pid_control_V3/PID ALTURA/I Gain/Internal Parameters'
 * '<S98>'  : 'pid_control_V3/PID ALTURA/Ideal P Gain/Passthrough'
 * '<S99>'  : 'pid_control_V3/PID ALTURA/Ideal P Gain Fdbk/Disabled'
 * '<S100>' : 'pid_control_V3/PID ALTURA/Integrator/Continuous'
 * '<S101>' : 'pid_control_V3/PID ALTURA/Integrator ICs/Internal IC'
 * '<S102>' : 'pid_control_V3/PID ALTURA/N Copy/Disabled'
 * '<S103>' : 'pid_control_V3/PID ALTURA/N Gain/Internal Parameters'
 * '<S104>' : 'pid_control_V3/PID ALTURA/P Copy/Disabled'
 * '<S105>' : 'pid_control_V3/PID ALTURA/Parallel P Gain/Internal Parameters'
 * '<S106>' : 'pid_control_V3/PID ALTURA/Reset Signal/Disabled'
 * '<S107>' : 'pid_control_V3/PID ALTURA/Saturation/Enabled'
 * '<S108>' : 'pid_control_V3/PID ALTURA/Saturation Fdbk/Disabled'
 * '<S109>' : 'pid_control_V3/PID ALTURA/Sum/Sum_PID'
 * '<S110>' : 'pid_control_V3/PID ALTURA/Sum Fdbk/Disabled'
 * '<S111>' : 'pid_control_V3/PID ALTURA/Tracking Mode/Disabled'
 * '<S112>' : 'pid_control_V3/PID ALTURA/Tracking Mode Sum/Passthrough'
 * '<S113>' : 'pid_control_V3/PID ALTURA/Tsamp - Integral/TsSignalSpecification'
 * '<S114>' : 'pid_control_V3/PID ALTURA/Tsamp - Ngain/Passthrough'
 * '<S115>' : 'pid_control_V3/PID ALTURA/postSat Signal/Forward_Path'
 * '<S116>' : 'pid_control_V3/PID ALTURA/preInt Signal/Internal PreInt'
 * '<S117>' : 'pid_control_V3/PID ALTURA/preSat Signal/Forward_Path'
 * '<S118>' : 'pid_control_V3/PID PITCH//ELEVATOR/Anti-windup'
 * '<S119>' : 'pid_control_V3/PID PITCH//ELEVATOR/D Gain'
 * '<S120>' : 'pid_control_V3/PID PITCH//ELEVATOR/External Derivative'
 * '<S121>' : 'pid_control_V3/PID PITCH//ELEVATOR/Filter'
 * '<S122>' : 'pid_control_V3/PID PITCH//ELEVATOR/Filter ICs'
 * '<S123>' : 'pid_control_V3/PID PITCH//ELEVATOR/I Gain'
 * '<S124>' : 'pid_control_V3/PID PITCH//ELEVATOR/Ideal P Gain'
 * '<S125>' : 'pid_control_V3/PID PITCH//ELEVATOR/Ideal P Gain Fdbk'
 * '<S126>' : 'pid_control_V3/PID PITCH//ELEVATOR/Integrator'
 * '<S127>' : 'pid_control_V3/PID PITCH//ELEVATOR/Integrator ICs'
 * '<S128>' : 'pid_control_V3/PID PITCH//ELEVATOR/N Copy'
 * '<S129>' : 'pid_control_V3/PID PITCH//ELEVATOR/N Gain'
 * '<S130>' : 'pid_control_V3/PID PITCH//ELEVATOR/P Copy'
 * '<S131>' : 'pid_control_V3/PID PITCH//ELEVATOR/Parallel P Gain'
 * '<S132>' : 'pid_control_V3/PID PITCH//ELEVATOR/Reset Signal'
 * '<S133>' : 'pid_control_V3/PID PITCH//ELEVATOR/Saturation'
 * '<S134>' : 'pid_control_V3/PID PITCH//ELEVATOR/Saturation Fdbk'
 * '<S135>' : 'pid_control_V3/PID PITCH//ELEVATOR/Sum'
 * '<S136>' : 'pid_control_V3/PID PITCH//ELEVATOR/Sum Fdbk'
 * '<S137>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tracking Mode'
 * '<S138>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tracking Mode Sum'
 * '<S139>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tsamp - Integral'
 * '<S140>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tsamp - Ngain'
 * '<S141>' : 'pid_control_V3/PID PITCH//ELEVATOR/postSat Signal'
 * '<S142>' : 'pid_control_V3/PID PITCH//ELEVATOR/preInt Signal'
 * '<S143>' : 'pid_control_V3/PID PITCH//ELEVATOR/preSat Signal'
 * '<S144>' : 'pid_control_V3/PID PITCH//ELEVATOR/Anti-windup/Back Calculation'
 * '<S145>' : 'pid_control_V3/PID PITCH//ELEVATOR/D Gain/Internal Parameters'
 * '<S146>' : 'pid_control_V3/PID PITCH//ELEVATOR/External Derivative/Error'
 * '<S147>' : 'pid_control_V3/PID PITCH//ELEVATOR/Filter/Cont. Filter'
 * '<S148>' : 'pid_control_V3/PID PITCH//ELEVATOR/Filter ICs/Internal IC - Filter'
 * '<S149>' : 'pid_control_V3/PID PITCH//ELEVATOR/I Gain/Internal Parameters'
 * '<S150>' : 'pid_control_V3/PID PITCH//ELEVATOR/Ideal P Gain/Passthrough'
 * '<S151>' : 'pid_control_V3/PID PITCH//ELEVATOR/Ideal P Gain Fdbk/Disabled'
 * '<S152>' : 'pid_control_V3/PID PITCH//ELEVATOR/Integrator/Continuous'
 * '<S153>' : 'pid_control_V3/PID PITCH//ELEVATOR/Integrator ICs/Internal IC'
 * '<S154>' : 'pid_control_V3/PID PITCH//ELEVATOR/N Copy/Disabled'
 * '<S155>' : 'pid_control_V3/PID PITCH//ELEVATOR/N Gain/Internal Parameters'
 * '<S156>' : 'pid_control_V3/PID PITCH//ELEVATOR/P Copy/Disabled'
 * '<S157>' : 'pid_control_V3/PID PITCH//ELEVATOR/Parallel P Gain/Internal Parameters'
 * '<S158>' : 'pid_control_V3/PID PITCH//ELEVATOR/Reset Signal/Disabled'
 * '<S159>' : 'pid_control_V3/PID PITCH//ELEVATOR/Saturation/Enabled'
 * '<S160>' : 'pid_control_V3/PID PITCH//ELEVATOR/Saturation Fdbk/Disabled'
 * '<S161>' : 'pid_control_V3/PID PITCH//ELEVATOR/Sum/Sum_PID'
 * '<S162>' : 'pid_control_V3/PID PITCH//ELEVATOR/Sum Fdbk/Disabled'
 * '<S163>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tracking Mode/Disabled'
 * '<S164>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tracking Mode Sum/Passthrough'
 * '<S165>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tsamp - Integral/TsSignalSpecification'
 * '<S166>' : 'pid_control_V3/PID PITCH//ELEVATOR/Tsamp - Ngain/Passthrough'
 * '<S167>' : 'pid_control_V3/PID PITCH//ELEVATOR/postSat Signal/Forward_Path'
 * '<S168>' : 'pid_control_V3/PID PITCH//ELEVATOR/preInt Signal/Internal PreInt'
 * '<S169>' : 'pid_control_V3/PID PITCH//ELEVATOR/preSat Signal/Forward_Path'
 * '<S170>' : 'pid_control_V3/PID TIIMON/Anti-windup'
 * '<S171>' : 'pid_control_V3/PID TIIMON/D Gain'
 * '<S172>' : 'pid_control_V3/PID TIIMON/External Derivative'
 * '<S173>' : 'pid_control_V3/PID TIIMON/Filter'
 * '<S174>' : 'pid_control_V3/PID TIIMON/Filter ICs'
 * '<S175>' : 'pid_control_V3/PID TIIMON/I Gain'
 * '<S176>' : 'pid_control_V3/PID TIIMON/Ideal P Gain'
 * '<S177>' : 'pid_control_V3/PID TIIMON/Ideal P Gain Fdbk'
 * '<S178>' : 'pid_control_V3/PID TIIMON/Integrator'
 * '<S179>' : 'pid_control_V3/PID TIIMON/Integrator ICs'
 * '<S180>' : 'pid_control_V3/PID TIIMON/N Copy'
 * '<S181>' : 'pid_control_V3/PID TIIMON/N Gain'
 * '<S182>' : 'pid_control_V3/PID TIIMON/P Copy'
 * '<S183>' : 'pid_control_V3/PID TIIMON/Parallel P Gain'
 * '<S184>' : 'pid_control_V3/PID TIIMON/Reset Signal'
 * '<S185>' : 'pid_control_V3/PID TIIMON/Saturation'
 * '<S186>' : 'pid_control_V3/PID TIIMON/Saturation Fdbk'
 * '<S187>' : 'pid_control_V3/PID TIIMON/Sum'
 * '<S188>' : 'pid_control_V3/PID TIIMON/Sum Fdbk'
 * '<S189>' : 'pid_control_V3/PID TIIMON/Tracking Mode'
 * '<S190>' : 'pid_control_V3/PID TIIMON/Tracking Mode Sum'
 * '<S191>' : 'pid_control_V3/PID TIIMON/Tsamp - Integral'
 * '<S192>' : 'pid_control_V3/PID TIIMON/Tsamp - Ngain'
 * '<S193>' : 'pid_control_V3/PID TIIMON/postSat Signal'
 * '<S194>' : 'pid_control_V3/PID TIIMON/preInt Signal'
 * '<S195>' : 'pid_control_V3/PID TIIMON/preSat Signal'
 * '<S196>' : 'pid_control_V3/PID TIIMON/Anti-windup/Passthrough'
 * '<S197>' : 'pid_control_V3/PID TIIMON/D Gain/Internal Parameters'
 * '<S198>' : 'pid_control_V3/PID TIIMON/External Derivative/Error'
 * '<S199>' : 'pid_control_V3/PID TIIMON/Filter/Cont. Filter'
 * '<S200>' : 'pid_control_V3/PID TIIMON/Filter ICs/Internal IC - Filter'
 * '<S201>' : 'pid_control_V3/PID TIIMON/I Gain/Internal Parameters'
 * '<S202>' : 'pid_control_V3/PID TIIMON/Ideal P Gain/Passthrough'
 * '<S203>' : 'pid_control_V3/PID TIIMON/Ideal P Gain Fdbk/Disabled'
 * '<S204>' : 'pid_control_V3/PID TIIMON/Integrator/Continuous'
 * '<S205>' : 'pid_control_V3/PID TIIMON/Integrator ICs/Internal IC'
 * '<S206>' : 'pid_control_V3/PID TIIMON/N Copy/Disabled'
 * '<S207>' : 'pid_control_V3/PID TIIMON/N Gain/Internal Parameters'
 * '<S208>' : 'pid_control_V3/PID TIIMON/P Copy/Disabled'
 * '<S209>' : 'pid_control_V3/PID TIIMON/Parallel P Gain/Internal Parameters'
 * '<S210>' : 'pid_control_V3/PID TIIMON/Reset Signal/Disabled'
 * '<S211>' : 'pid_control_V3/PID TIIMON/Saturation/Enabled'
 * '<S212>' : 'pid_control_V3/PID TIIMON/Saturation Fdbk/Disabled'
 * '<S213>' : 'pid_control_V3/PID TIIMON/Sum/Sum_PID'
 * '<S214>' : 'pid_control_V3/PID TIIMON/Sum Fdbk/Disabled'
 * '<S215>' : 'pid_control_V3/PID TIIMON/Tracking Mode/Disabled'
 * '<S216>' : 'pid_control_V3/PID TIIMON/Tracking Mode Sum/Passthrough'
 * '<S217>' : 'pid_control_V3/PID TIIMON/Tsamp - Integral/TsSignalSpecification'
 * '<S218>' : 'pid_control_V3/PID TIIMON/Tsamp - Ngain/Passthrough'
 * '<S219>' : 'pid_control_V3/PID TIIMON/postSat Signal/Forward_Path'
 * '<S220>' : 'pid_control_V3/PID TIIMON/preInt Signal/Internal PreInt'
 * '<S221>' : 'pid_control_V3/PID TIIMON/preSat Signal/Forward_Path'
 * '<S222>' : 'pid_control_V3/PID VELOCIDAD/Anti-windup'
 * '<S223>' : 'pid_control_V3/PID VELOCIDAD/D Gain'
 * '<S224>' : 'pid_control_V3/PID VELOCIDAD/External Derivative'
 * '<S225>' : 'pid_control_V3/PID VELOCIDAD/Filter'
 * '<S226>' : 'pid_control_V3/PID VELOCIDAD/Filter ICs'
 * '<S227>' : 'pid_control_V3/PID VELOCIDAD/I Gain'
 * '<S228>' : 'pid_control_V3/PID VELOCIDAD/Ideal P Gain'
 * '<S229>' : 'pid_control_V3/PID VELOCIDAD/Ideal P Gain Fdbk'
 * '<S230>' : 'pid_control_V3/PID VELOCIDAD/Integrator'
 * '<S231>' : 'pid_control_V3/PID VELOCIDAD/Integrator ICs'
 * '<S232>' : 'pid_control_V3/PID VELOCIDAD/N Copy'
 * '<S233>' : 'pid_control_V3/PID VELOCIDAD/N Gain'
 * '<S234>' : 'pid_control_V3/PID VELOCIDAD/P Copy'
 * '<S235>' : 'pid_control_V3/PID VELOCIDAD/Parallel P Gain'
 * '<S236>' : 'pid_control_V3/PID VELOCIDAD/Reset Signal'
 * '<S237>' : 'pid_control_V3/PID VELOCIDAD/Saturation'
 * '<S238>' : 'pid_control_V3/PID VELOCIDAD/Saturation Fdbk'
 * '<S239>' : 'pid_control_V3/PID VELOCIDAD/Sum'
 * '<S240>' : 'pid_control_V3/PID VELOCIDAD/Sum Fdbk'
 * '<S241>' : 'pid_control_V3/PID VELOCIDAD/Tracking Mode'
 * '<S242>' : 'pid_control_V3/PID VELOCIDAD/Tracking Mode Sum'
 * '<S243>' : 'pid_control_V3/PID VELOCIDAD/Tsamp - Integral'
 * '<S244>' : 'pid_control_V3/PID VELOCIDAD/Tsamp - Ngain'
 * '<S245>' : 'pid_control_V3/PID VELOCIDAD/postSat Signal'
 * '<S246>' : 'pid_control_V3/PID VELOCIDAD/preInt Signal'
 * '<S247>' : 'pid_control_V3/PID VELOCIDAD/preSat Signal'
 * '<S248>' : 'pid_control_V3/PID VELOCIDAD/Anti-windup/Cont. Clamping Parallel'
 * '<S249>' : 'pid_control_V3/PID VELOCIDAD/Anti-windup/Cont. Clamping Parallel/Dead Zone'
 * '<S250>' : 'pid_control_V3/PID VELOCIDAD/Anti-windup/Cont. Clamping Parallel/Dead Zone/Enabled'
 * '<S251>' : 'pid_control_V3/PID VELOCIDAD/D Gain/Internal Parameters'
 * '<S252>' : 'pid_control_V3/PID VELOCIDAD/External Derivative/Error'
 * '<S253>' : 'pid_control_V3/PID VELOCIDAD/Filter/Cont. Filter'
 * '<S254>' : 'pid_control_V3/PID VELOCIDAD/Filter ICs/Internal IC - Filter'
 * '<S255>' : 'pid_control_V3/PID VELOCIDAD/I Gain/Internal Parameters'
 * '<S256>' : 'pid_control_V3/PID VELOCIDAD/Ideal P Gain/Passthrough'
 * '<S257>' : 'pid_control_V3/PID VELOCIDAD/Ideal P Gain Fdbk/Disabled'
 * '<S258>' : 'pid_control_V3/PID VELOCIDAD/Integrator/Continuous'
 * '<S259>' : 'pid_control_V3/PID VELOCIDAD/Integrator ICs/Internal IC'
 * '<S260>' : 'pid_control_V3/PID VELOCIDAD/N Copy/Disabled'
 * '<S261>' : 'pid_control_V3/PID VELOCIDAD/N Gain/Internal Parameters'
 * '<S262>' : 'pid_control_V3/PID VELOCIDAD/P Copy/Disabled'
 * '<S263>' : 'pid_control_V3/PID VELOCIDAD/Parallel P Gain/Internal Parameters'
 * '<S264>' : 'pid_control_V3/PID VELOCIDAD/Reset Signal/Disabled'
 * '<S265>' : 'pid_control_V3/PID VELOCIDAD/Saturation/Enabled'
 * '<S266>' : 'pid_control_V3/PID VELOCIDAD/Saturation Fdbk/Disabled'
 * '<S267>' : 'pid_control_V3/PID VELOCIDAD/Sum/Sum_PID'
 * '<S268>' : 'pid_control_V3/PID VELOCIDAD/Sum Fdbk/Disabled'
 * '<S269>' : 'pid_control_V3/PID VELOCIDAD/Tracking Mode/Disabled'
 * '<S270>' : 'pid_control_V3/PID VELOCIDAD/Tracking Mode Sum/Passthrough'
 * '<S271>' : 'pid_control_V3/PID VELOCIDAD/Tsamp - Integral/TsSignalSpecification'
 * '<S272>' : 'pid_control_V3/PID VELOCIDAD/Tsamp - Ngain/Passthrough'
 * '<S273>' : 'pid_control_V3/PID VELOCIDAD/postSat Signal/Forward_Path'
 * '<S274>' : 'pid_control_V3/PID VELOCIDAD/preInt Signal/Internal PreInt'
 * '<S275>' : 'pid_control_V3/PID VELOCIDAD/preSat Signal/Forward_Path'
 * '<S276>' : 'pid_control_V3/SUBSYSTEM_MODEL/Band-Limited White Noise'
 * '<S277>' : 'pid_control_V3/SUBSYSTEM_MODEL/Compare To Constant'
 * '<S278>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))'
 * '<S279>' : 'pid_control_V3/SUBSYSTEM_MODEL/MATLAB Function - MODEL'
 * '<S280>' : 'pid_control_V3/SUBSYSTEM_MODEL/MATLAB Function-reset'
 * '<S281>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe1_TURBULENCIA1'
 * '<S282>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_HEAVE'
 * '<S283>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_RATE'
 * '<S284>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_TURBULENCIA'
 * '<S285>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Angle Conversion'
 * '<S286>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on angular rates'
 * '<S287>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on velocities'
 * '<S288>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Length Conversion'
 * '<S289>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Length Conversion1'
 * '<S290>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/RMS turbulence  intensities'
 * '<S291>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates'
 * '<S292>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities'
 * '<S293>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Turbulence scale lengths'
 * '<S294>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Velocity Conversion'
 * '<S295>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Velocity Conversion2'
 * '<S296>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/White Noise'
 * '<S297>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on angular rates/Hpgw'
 * '<S298>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on angular rates/Hqgw'
 * '<S299>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on angular rates/Hrgw'
 * '<S300>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on velocities/Hugw(s)'
 * '<S301>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on velocities/Hvgw(s)'
 * '<S302>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Filters on velocities/Hwgw(s)'
 * '<S303>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/RMS turbulence  intensities/High Altitude Intensity'
 * '<S304>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/RMS turbulence  intensities/Low Altitude Intensity'
 * '<S305>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Interpolate  rates'
 * '<S306>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Low altitude  rates'
 * '<S307>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Medium//High  altitude rates'
 * '<S308>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Merge Subsystems'
 * '<S309>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Interpolate  rates/wind to body transformation'
 * '<S310>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Interpolate  rates/wind to body transformation/convert to earth coords'
 * '<S311>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Low altitude  rates/wind to body transformation'
 * '<S312>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select angular rates/Low altitude  rates/wind to body transformation/convert to earth coords'
 * '<S313>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Interpolate  velocities'
 * '<S314>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Low altitude  velocities'
 * '<S315>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Medium//High  altitude velocities'
 * '<S316>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Merge Subsystems'
 * '<S317>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Interpolate  velocities/wind to body transformation'
 * '<S318>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Interpolate  velocities/wind to body transformation/convert to earth coords'
 * '<S319>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Low altitude  velocities/wind to body transformation'
 * '<S320>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Select velocities/Low altitude  velocities/wind to body transformation/convert to earth coords'
 * '<S321>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Turbulence scale lengths/Low altitude scale length'
 * '<S322>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Turbulence scale lengths/Medium//High altitude scale length'
 * '<S323>' : 'pid_control_V3/SUBSYSTEM_MODEL/Dryden Wind Turbulence Model  (Continuous (-q +r))/Turbulence scale lengths/Medium//High altitude scale length/Length Conversion'
 * '<S324>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe1_TURBULENCIA1/Enabled Subsystem'
 * '<S325>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_HEAVE/Enabled Subsystem'
 * '<S326>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_RATE/Enabled Subsystem'
 * '<S327>' : 'pid_control_V3/SUBSYSTEM_MODEL/Subscribe_TURBULENCIA/Enabled Subsystem'
 * '<S328>' : 'pid_control_V3/Subscribe-ALTURA1/Enabled Subsystem'
 * '<S329>' : 'pid_control_V3/Subscribe-YAW/Enabled Subsystem'
 */
#endif                                 /* pid_control_V3_h_ */
