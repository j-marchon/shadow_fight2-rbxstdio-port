// HOOAAGABMBL$$MJIIMHKPENP @ RVA 0x30EFF04

HOOAAGABMBL_o *
HOOAAGABMBL__MJIIMHKPENP(HOOAAGABMBL_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  PONNKDFAMFM_o *JGANIDFNOAF;
  HOOAAGABMBL_o *pHVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_04566419 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8107);
    DAT_04566419 = 1;
  }
  __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this,false,0x7fffffff,in_x3);
  if (-1 < DPJIDNBJIBG) {
    if (__this_00 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) goto LAB_031f0070;
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      method_00 = Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__;
      JGANIDFNOAF = (PONNKDFAMFM_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
      pHVar1 = HOOAAGABMBL__KGJLMGPGJEI(__this,JGANIDFNOAF,method_00);
      return pHVar1;
    }
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  local_24 = DPJIDNBJIBG;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  if (args != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_8107,args,(MethodInfo *)0x0);
      return (HOOAAGABMBL_o *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_031f0070:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

