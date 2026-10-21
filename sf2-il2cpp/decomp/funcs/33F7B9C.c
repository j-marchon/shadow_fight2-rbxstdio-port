// CocosAnimation$$NKCPDMKJNII @ RVA 0x33F7B9C

void CocosAnimation__NKCPDMKJNII(CocosAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *in_x2;
  
  CocosAnimation__DHEBEHGMBOA(__this,(__this->fields).FJJPFEGPEFA,in_x2);
  iVar2 = (__this->fields).PAGAGEMKILK;
  iVar1 = (__this->fields).FIGKMEJEHGE + (__this->fields).FJJPFEGPEFA;
  (__this->fields).FJJPFEGPEFA = iVar1;
  if (((__this->fields).OFNNCOJAFJB < iVar1) || (iVar1 < iVar2)) {
    iVar1 = (__this->fields)._FEBBHCOAEMI_k__BackingField;
    (__this->fields).FJJPFEGPEFA = iVar2;
    iVar2 = iVar1 + -1;
    if (0 < iVar1) {
      (__this->fields)._FEBBHCOAEMI_k__BackingField = iVar2;
      (__this->fields)._JJCDMHFHJAB_k__BackingField = iVar2 != 0;
      if (iVar2 == 0) {
        __this_00 = (__this->fields).OnAnimationComplete;
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

