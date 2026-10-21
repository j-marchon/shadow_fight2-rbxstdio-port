// ENOJCLHOINK$$EPBAKPGFKLN @ RVA 0x308CE38

void ENOJCLHOINK__EPBAKPGFKLN(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  KBFGKFAKGPP_o **ppKVar2;
  
  if ((DAT_04566066 & 1) == 0) {
    FUN_01bab630(&KBFGKFAKGPP_TypeInfo);
    DAT_04566066 = 1;
    method = extraout_x1;
  }
  ppKVar2 = &(__this->fields).FIFCACFAFPH;
  if (*ppKVar2 != (KBFGKFAKGPP_o *)0x0) {
    return;
  }
  __this_00 = (KBFGKFAKGPP_o *)thunk_FUN_01bda818(KBFGKFAKGPP_TypeInfo,method);
  KBFGKFAKGPP___ctor(__this_00,(MethodInfo *)0x0);
  *ppKVar2 = __this_00;
  thunk_FUN_01c20e04(ppKVar2,__this_00);
  if ((*ppKVar2 != (KBFGKFAKGPP_o *)0x0) &&
     (pUVar1 = ((*ppKVar2)->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).LDAKOINICNJ;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

