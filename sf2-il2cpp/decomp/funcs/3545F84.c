// LEGDPJHPEOB$$BJHNMDHPNMB @ RVA 0x3545F84

void LEGDPJHPEOB__BJHNMDHPNMB
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  int32_t BMPJIDHGCBN;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04568b13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_10678);
    DAT_04568b13 = 1;
  }
  if (AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    OHLKNCPBCBL = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((AJOBAPIPBJB->fields).KCPPJGKAILM,-1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    if (OHLKNCPBCBL == -1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar1 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
        if ((pSVar1 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar1;
          thunk_FUN_01c20e04(args->m_Items,pSVar1);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10678,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      __this_00 = (AJOBAPIPBJB->fields).EEFPBGNAFFI;
      __this = (LEGDPJHPEOB_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
        if ((__this_00->fields)._size == 0) {
          if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_24 = GJAEIBMAFGE__MPGLNGGPOIK(OHLKNCPBCBL,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                );
          __this = (LEGDPJHPEOB_o *)0x0;
          if (__this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_03646174;
          pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
          BMPJIDHGCBN = PCOEHCPGBBG__JBGCINPPLAC(pSVar1,0,(MethodInfo *)0x0);
          if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo);
          }
          local_24 = GJAEIBMAFGE__CKEMOGMODFK(OHLKNCPBCBL,BMPJIDHGCBN,(MethodInfo *)0x0);
        }
        __this = (LEGDPJHPEOB_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
          (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&KDBIBINALOL->fields,__this);
          return;
        }
      }
    }
  }
LAB_03646174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

