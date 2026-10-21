// Nekki.SF2.GUI.Common.LoaderScreenSelector$$LFGMJGFHILO @ RVA 0x3580914

void Nekki_SF2_GUI_Common_LoaderScreenSelector__LFGMJGFHILO
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* catch() { ... } // from try @ 036808fc with catch @ 03680924 */
                    /* try { // try from 0368092c to 03780933 has its CatchHandler @ 03680948 */
  if ((DAT_04568ccc & 1) == 0) {
                    /* try { // try from 03680934 to 0378093f has its CatchHandler @ 036806dc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03680940 to 03780947 has its CatchHandler @ 03680948 */
    DAT_04568ccc = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368092c with catch @ 03680948
                       catch(type#2 @ 00000000) { ... } // from try @ 03680940 with catch @ 03680948
                        */
  pNVar3 = (__this->fields)._fullSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._fullSprite;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036809d8;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._leftSprite;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._rightSprite;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036809d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

