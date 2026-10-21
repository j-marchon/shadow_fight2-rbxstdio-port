// EnterScreen$$SetVisible @ RVA 0x358ABB8

void EnterScreen__SetVisible(EnterScreen_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
                    /* try { // try from 0368abc8 to 0378abd7 has its CatchHandler @ 0368acb8 */
                    /* try { // try from 0368abd8 to 0378ac03 has its CatchHandler @ 0368a9b8 */
  if ((DAT_04568d3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d3c = 1;
  }
  pNVar3 = (__this->fields)._backgroundLeft;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0368ac04 to 0378ac0f has its CatchHandler @ 0368acb8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368ac10 to 0378ac97 has its CatchHandler @ 0368a9b8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._backgroundLeft;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368ace8;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._backgroundRight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._backgroundRight;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368ace8;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368ac98 to 0378ac9b has its CatchHandler @ 0368acb0 */
                    /* try { // try from 0368ac9c to 0378ac9f has its CatchHandler @ 0368a9b8 */
                    /* try { // try from 0368aca0 to 0378aca3 has its CatchHandler @ 0368acac */
                    /* try { // try from 0368aca4 to 0378accb has its CatchHandler @ 0368a9b8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* catch() { ... } // from try @ 0368accc with catch @ 0368ace0 */
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aca0 with catch @ 0368acac
                        */
  pNVar4 = (__this->fields)._label;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ac98 with catch @ 0368acb0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ab48 with catch @ 0368acb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368abc8 with catch @ 0368acb8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0368ac04 with catch @ 0368acb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aaec with catch @ 0368acbc
                        */
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0368accc to 0378accf has its CatchHandler @ 0368ace0 */
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_0368ace8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

