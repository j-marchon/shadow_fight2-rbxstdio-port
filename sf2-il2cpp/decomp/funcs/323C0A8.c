// Nekki.SF2.GUI.SFScrollRect$$DEICOOLNJLP @ RVA 0x323C0A8

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_c *pUVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
                    /* try { // try from 0333c0c0 to 0343c0c7 has its CatchHandler @ 0333c37c */
  if ((DAT_0456706f & 1) == 0) {
                    /* try { // try from 0333c0d0 to 0343c0d7 has its CatchHandler @ 0333c384 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0333c0d8 to 0343c0f7 has its CatchHandler @ 0333c394 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456706f = 1;
    method = extraout_x1;
  }
  ppUVar3 = &(__this->fields).PKDDBJOOOAD;
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 0333c104 to 0343c10b has its CatchHandler @ 0333c380 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0333c114 to 0343c11b has its CatchHandler @ 0333c378 */
  if (bVar2) {
                    /* try { // try from 0333c11c to 0343c127 has its CatchHandler @ 0333c360 */
    (__this->fields).PKDDBJOOOAD = (__this->fields).m_Viewport;
    thunk_FUN_01c20e04(ppUVar3);
  }
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0333c13c to 0343c143 has its CatchHandler @ 0333c364 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 0333c154 to 0343c15f has its CatchHandler @ 0333c574 */
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0333c194 to 0343c1af has its CatchHandler @ 0333c5e0 */
      *ppUVar3 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
                    /* try { // try from 0333c174 to 0343c17b has its CatchHandler @ 0333c5bc */
      if ((pUVar4->klass != UnityEngine_RectTransform_TypeInfo) ||
         (*ppUVar3 = pUVar4, pUVar4->klass != pUVar1)) {
                    /* try { // try from 0333c18c to 0343c193 has its CatchHandler @ 0333c5b8 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pUVar4);
      }
    }
    thunk_FUN_01c20e04(ppUVar3,pUVar4);
  }
  return *ppUVar3;
}

