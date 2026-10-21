// GBJGJEGPHKD$$RandomizeObscuredVars @ RVA 0x342E1A0

void GBJGJEGPHKD__RandomizeObscuredVars(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *__this_00;
  System_Action_IEFEBEDLHNN__o **ppSVar1;
  System_Action_GEBHIBIEAJE__o **ppSVar2;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar3;
  GBJGJEGPHKD_GOCIPFHDKIO_o *pGVar4;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_02;
  System_Action_GEBHIBIEAJE__o *action;
  System_Action_IEFEBEDLHNN__o *action_00;
  
  if ((DAT_04568156 & 1) == 0) {
    FUN_01bab630(&System_Action<GEBHIBIEAJE>_TypeInfo);
    FUN_01bab630(&System_Action<IEFEBEDLHNN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_ForEach__);
    FUN_01bab630(&Method_GBJGJEGPHKD_<>c_DHODDGENKLG__);
    FUN_01bab630(&Method_GBJGJEGPHKD_<>c_JIAGBOJOIHO__);
    FUN_01bab630(&GBJGJEGPHKD_<>c_TypeInfo);
    DAT_04568156 = 1;
  }
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
    __this_00 = (pGVar3->fields).LNBKBMNLJNG;
    if (__this_00 != (IEFEBEDLHNN_o *)0x0) {
      IEFEBEDLHNN__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      if (pGVar3 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352e384;
    }
    __this_02 = (pGVar3->fields).DMFCLEMPPIM;
    if ((GBJGJEGPHKD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = GBJGJEGPHKD_<>c_TypeInfo->static_fields->__9__78_0;
    if (action_00 == (System_Action_IEFEBEDLHNN__o *)0x0) {
      if ((GBJGJEGPHKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = (System_Action_IEFEBEDLHNN__o *)
                  thunk_FUN_01bda818(System_Action<IEFEBEDLHNN>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &GBJGJEGPHKD_<>c_TypeInfo->static_fields->__9__78_0;
      *ppSVar1 = action_00;
      thunk_FUN_01c20e04(ppSVar1,action_00);
    }
    if (__this_02 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_00,
                 Method_System_Collections_Generic_List<IEFEBEDLHNN>_ForEach__);
      pGVar4 = (__this->fields).HJCKNKNHFEK;
      if (pGVar4 != (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) {
        __this_01 = (pGVar4->fields).DMFCLEMPPIM;
        if ((GBJGJEGPHKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = GBJGJEGPHKD_<>c_TypeInfo->static_fields->__9__78_1;
        if (action == (System_Action_GEBHIBIEAJE__o *)0x0) {
          if ((GBJGJEGPHKD_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_GEBHIBIEAJE__o *)
                   thunk_FUN_01bda818(System_Action<GEBHIBIEAJE>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &GBJGJEGPHKD_<>c_TypeInfo->static_fields->__9__78_1;
          *ppSVar2 = action;
          thunk_FUN_01c20e04(ppSVar2,action);
        }
        if (__this_01 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (System_Action_T__o *)action,
                     Method_System_Collections_Generic_List<GEBHIBIEAJE>_ForEach__);
          return;
        }
      }
    }
  }
LAB_0352e384:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

