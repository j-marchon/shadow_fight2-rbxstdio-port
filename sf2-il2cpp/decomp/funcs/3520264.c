// Nekki.SF2.GUI.Fight.PlayerLifeBar$$BBEJMLOCNNM @ RVA 0x3520264

Nekki_SF2_GUI_ResolutionImageSkew_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,
          Nekki_SF2_GUI_ResolutionImageSkew_o *EMMEKOIAOOE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  
  if ((DAT_045689b5 & 1) == 0) {
                    /* try { // try from 0362028c to 037202af has its CatchHandler @ 0362037c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImageSkew>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImageSkew>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 036202b0 to 03720343 has its CatchHandler @ 0361ffcc */
    DAT_045689b5 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)EMMEKOIAOOE,
                         Method_UnityEngine_Object_Instantiate<ResolutionImageSkew>__);
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar1,(__this->fields)._barPanel,false,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar1,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                    /* try { // try from 03620344 to 0372034b has its CatchHandler @ 036203a0 */
        pIVar2 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this_00,
                            Method_UnityEngine_Component_GetComponent<ResolutionImageSkew>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
                    /* try { // try from 0362034c to 0372034f has its CatchHandler @ 03620394 */
                    /* try { // try from 03620350 to 03720353 has its CatchHandler @ 03620388 */
                    /* try { // try from 03620354 to 0372035b has its CatchHandler @ 03620384 */
          (*pIVar2->klass->vtable[0x5b].methodPtr)(pIVar2,pIVar2->klass->vtable[0x5b].method);
                    /* try { // try from 0362035c to 0372035f has its CatchHandler @ 03620374 */
                    /* try { // try from 03620360 to 03720363 has its CatchHandler @ 0361ffcc */
                    /* try { // try from 03620364 to 03720367 has its CatchHandler @ 03620370 */
                    /* try { // try from 03620368 to 037203b7 has its CatchHandler @ 0361ffcc */
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03620364 with catch @ 03620370 */
  FUN_01bab8c8();
}

