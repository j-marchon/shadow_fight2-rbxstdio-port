// Nekki.SF2.GUI.Dialogs.BaseDialog$$GLANJNFACKI @ RVA 0x33AEEEC

void Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  float fVar4;
  
                    /* try { // try from 034aeef4 to 035aeef7 has its CatchHandler @ 034af6e0 */
  if ((DAT_04567d34 & 1) == 0) {
                    /* try { // try from 034aef14 to 035aef2b has its CatchHandler @ 034af704 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d34 = 1;
  }
  fVar4 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                           (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
  pNVar3 = (__this->fields)._topStripe;
                    /* try { // try from 034aef3c to 035aef43 has its CatchHandler @ 034af6c0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034aef54 to 035aef5b has its CatchHandler @ 034af6c4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034aef5c to 035aef7b has its CatchHandler @ 034af700 */
  if (bVar1) {
    pNVar3 = (__this->fields)._topStripe;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034aeff0;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,fVar4 + 150.0,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._bottomStripe;
                    /* try { // try from 034aef8c to 035aef93 has its CatchHandler @ 034af6bc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034aefa4 to 035aefab has its CatchHandler @ 034af6ec */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034aefe4 to 035aefef has its CatchHandler @ 034af6dc */
    return;
  }
                    /* try { // try from 034aefac to 035aefb7 has its CatchHandler @ 034af6d0 */
  pNVar3 = (__this->fields)._bottomStripe;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 034aefcc to 035aefd3 has its CatchHandler @ 034af6e8 */
                    /* try { // try from 034aefdc to 035aefe3 has its CatchHandler @ 034af6b4 */
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-(fVar4 + 160.0),(MethodInfo *)0x0);
    return;
  }
LAB_034aeff0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

