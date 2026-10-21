// HintButton$$GMGNDMJDBAL @ RVA 0x2FF1ED8

void HintButton__GMGNDMJDBAL(HintButton_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HintUI__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
  if ((DAT_04565a6e & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    auVar1 = FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    DAT_04565a6e = 1;
  }
  result = (__this->fields)._Hints;
  if (result != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields)._Hints;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

