// HEFOANCOHDC$$ECNFLHKCENA @ RVA 0x3420450

void HEFOANCOHDC__ECNFLHKCENA
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_00;
  System_String_o *pSVar2;
  HEFOANCOHDC_c *method_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  MMFIDKMDADC_Fields *pMVar5;
  float FBEFHEEKKAP;
  float local_24;
  
  if ((DAT_045680df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_3115);
    __this = (HEFOANCOHDC_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_045680df = 1;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this = (HEFOANCOHDC_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this != (HEFOANCOHDC_o *)0x0))
  {
    iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
    iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
    iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
    iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
    if (iVar1 == 1) {
      __this_00 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this,0,
                             Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                            );
      __this = (HEFOANCOHDC_o *)0x0;
      if (__this_00 != (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) {
        pSVar2 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_00,(MethodInfo *)0x0);
        FBEFHEEKKAP = PCOEHCPGBBG__OFFODGKLGOP(pSVar2,0.0,(MethodInfo *)0x0);
        method_00 = HEFOANCOHDC_TypeInfo;
        if ((HEFOANCOHDC_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (HEFOANCOHDC_c *)thunk_FUN_01ba7564();
        }
        local_24 = HEFOANCOHDC__EABDBJONHNG(FBEFHEEKKAP,(MethodInfo *)method_00);
        __this = (HEFOANCOHDC_o *)System_Single__ToString(local_24,(MethodInfo *)&local_24);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
    else if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
      pMVar5 = &HPACPFLKHPK->fields;
      pMVar5->HPACPFLKHPK = StringLiteral_1567;
      thunk_FUN_01c20e04(pMVar5);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (HEFOANCOHDC_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar2 = pMVar5->HPACPFLKHPK;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_3115,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

