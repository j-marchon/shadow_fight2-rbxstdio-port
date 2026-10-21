// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshContent @ RVA 0x34C428C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshContent
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  
  if ((DAT_0456862a & 1) == 0) {
                    /* try { // try from 035c42a8 to 036c433b has its CatchHandler @ 035c4078 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456862a = 1;
    method = extraout_x1;
  }
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
  }
  CNDPGGAFHEA = (__this->fields).PCBECBEFJOI;
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 035c4354 with catch @ 035c4360 */
    pNVar2 = (__this->fields)._PropertiesPanel;
LAB_035c4364:
                    /* catch() { ... } // from try @ 035c434c with catch @ 035c4364 */
                    /* catch() { ... } // from try @ 035c4348 with catch @ 035c4368 */
                    /* catch() { ... } // from try @ 035c4344 with catch @ 035c436c */
                    /* catch() { ... } // from try @ 035c4244 with catch @ 035c4370 */
    if ((pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* catch() { ... } // from try @ 035c4264 with catch @ 035c4374 */
                    /* catch() { ... } // from try @ 035c4274 with catch @ 035c4378 */
                    /* catch() { ... } // from try @ 035c433c with catch @ 035c437c */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c41e0 with catch @ 035c4380 */
    pNVar4 = (__this->fields)._NotExistText;
                    /* catch() { ... } // from try @ 035c4184 with catch @ 035c4384 */
                    /* catch() { ... } // from try @ 035c4280 with catch @ 035c4388 */
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* try { // try from 035c4398 to 036c439b has its CatchHandler @ 035c43ac */
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._ForgeOpenButton;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pSVar1 = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_035c43dc;
    pNVar2 = (__this->fields)._PropertiesPanel;
    if ((pSVar1->fields)._size == 0) goto LAB_035c4364;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) goto LAB_035c43dc;
    (*(pNVar2->klass->vtable)._4_SetPerks.methodPtr)
              (pNVar2,pSVar1,(__this->fields).PCBECBEFJOI,(pNVar2->klass->vtable)._4_SetPerks.method
              );
    pNVar2 = (__this->fields)._PropertiesPanel;
                    /* try { // try from 035c433c to 036c4343 has its CatchHandler @ 035c437c */
                    /* try { // try from 035c4344 to 036c4347 has its CatchHandler @ 035c436c */
    if ((pNVar2 == (Nekki_SF2_GUI_Shop_PropertiesPerksPanel_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c43dc;
                    /* try { // try from 035c4348 to 036c434b has its CatchHandler @ 035c4368 */
                    /* try { // try from 035c434c to 036c434f has its CatchHandler @ 035c4364 */
                    /* try { // try from 035c4350 to 036c4353 has its CatchHandler @ 035c4078 */
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                    /* try { // try from 035c4354 to 036c4357 has its CatchHandler @ 035c4360 */
    pNVar4 = (__this->fields)._NotExistText;
                    /* try { // try from 035c4358 to 036c4397 has its CatchHandler @ 035c4078 */
  }
                    /* catch() { ... } // from try @ 035c4398 with catch @ 035c43ac */
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 035c43b4 to 036c441b has its CatchHandler @ 035c4430 */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    return;
  }
LAB_035c43dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

