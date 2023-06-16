/* Include files */

#include "uas_main_6_4_sfun.h"
#include "c3_uas_main_6_4.h"
#include "c4_uas_main_6_4.h"
#include "c6_uas_main_6_4.h"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void uas_main_6_4_initializer()
{
}

void uas_main_6_4_terminator()
{
}

/* SFunction Glue Code */
unsigned int sf_uas_main_6_4_method_dispatcher(SimStruct *simstructPtr, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==3) {
    c3_uas_main_6_4_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_uas_main_6_4_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_uas_main_6_4_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_uas_main_6_4_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1614487867U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3336452765U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1064283737U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1404479299U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 3:
        {
          extern void sf_c3_uas_main_6_4_get_check_sum(mxArray *plhs[]);
          sf_c3_uas_main_6_4_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_uas_main_6_4_get_check_sum(mxArray *plhs[]);
          sf_c4_uas_main_6_4_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_uas_main_6_4_get_check_sum(mxArray *plhs[]);
          sf_c6_uas_main_6_4_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(152254708U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2033457249U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(863007285U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3588198290U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(311276345U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4268243384U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(144279950U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1422250597U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_uas_main_6_4_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 3:
      {
        if (strcmp(instanceChksum, "sEC4Tl1YVWrc2F0pAWDnSoF") == 0) {
          extern const mxArray
            *sf_c3_uas_main_6_4_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c3_uas_main_6_4_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 4:
      {
        if (strcmp(instanceChksum, "sne2L4StIMZd8npgx1NXH9G") == 0) {
          extern const mxArray
            *sf_c4_uas_main_6_4_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_uas_main_6_4_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 6:
      {
        if (strcmp(instanceChksum, "sXTsUgqMMBRU6cN1EJBl4HF") == 0) {
          extern const mxArray
            *sf_c6_uas_main_6_4_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c6_uas_main_6_4_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_uas_main_6_4_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 3:
      {
        if (strcmp(tpChksum, "sEC4Tl1YVWrc2F0pAWDnSoF") == 0) {
          extern mxArray *sf_c3_uas_main_6_4_third_party_uses_info(void);
          plhs[0] = sf_c3_uas_main_6_4_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sne2L4StIMZd8npgx1NXH9G") == 0) {
          extern mxArray *sf_c4_uas_main_6_4_third_party_uses_info(void);
          plhs[0] = sf_c4_uas_main_6_4_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sXTsUgqMMBRU6cN1EJBl4HF") == 0) {
          extern mxArray *sf_c6_uas_main_6_4_third_party_uses_info(void);
          plhs[0] = sf_c6_uas_main_6_4_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_uas_main_6_4_jit_fallback_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 3:
      {
        if (strcmp(tpChksum, "sEC4Tl1YVWrc2F0pAWDnSoF") == 0) {
          extern mxArray *sf_c3_uas_main_6_4_jit_fallback_info(void);
          plhs[0] = sf_c3_uas_main_6_4_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sne2L4StIMZd8npgx1NXH9G") == 0) {
          extern mxArray *sf_c4_uas_main_6_4_jit_fallback_info(void);
          plhs[0] = sf_c4_uas_main_6_4_jit_fallback_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sXTsUgqMMBRU6cN1EJBl4HF") == 0) {
          extern mxArray *sf_c6_uas_main_6_4_jit_fallback_info(void);
          plhs[0] = sf_c6_uas_main_6_4_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_uas_main_6_4_get_post_codegen_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 3:
      {
        if (strcmp(tpChksum, "sEC4Tl1YVWrc2F0pAWDnSoF") == 0) {
          const char *sf_c3_uas_main_6_4_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c3_uas_main_6_4_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sne2L4StIMZd8npgx1NXH9G") == 0) {
          const char *sf_c4_uas_main_6_4_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c4_uas_main_6_4_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sXTsUgqMMBRU6cN1EJBl4HF") == 0) {
          const char *sf_c6_uas_main_6_4_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c6_uas_main_6_4_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_uas_main_6_4_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 3:
      {
        if (strcmp(tpChksum, "sEC4Tl1YVWrc2F0pAWDnSoF") == 0) {
          extern mxArray *sf_c3_uas_main_6_4_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_uas_main_6_4_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sne2L4StIMZd8npgx1NXH9G") == 0) {
          extern mxArray *sf_c4_uas_main_6_4_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_uas_main_6_4_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sXTsUgqMMBRU6cN1EJBl4HF") == 0) {
          extern mxArray *sf_c6_uas_main_6_4_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_uas_main_6_4_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void uas_main_6_4_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_uas_main_6_4_optimization_info(void);
mxArray* load_uas_main_6_4_optimization_info(boolean_T isRtwGen, boolean_T
  isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_uas_main_6_4_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("uas_main_6_4",
      "uas_main_6_4");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_uas_main_6_4_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
