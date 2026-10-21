// TypeDefIndex 1357
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuMaterialUI : MonoBehaviour
// Fields:
//   private ResolutionImage _Icon; // 0x20
//   private LabelAlias _Value; // 0x28
//   private HBNENINHPGF FICNNKFIABO; // 0x30

// ===== public HBNENINHPGF get_Material()  [RVA 0x31679CC]
// Nekki.SF2.GUI.Menu.MenuMaterialUI$$get_Material @ RVA 0x31679CC

HBNENINHPGF_o *
Nekki_SF2_GUI_Menu_MenuMaterialUI__get_Material
          (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,MethodInfo *method)

{
  return (__this->fields).FICNNKFIABO;
}


// ===== public void set_Material(HBNENINHPGF CJNHFNHJHPE)  [RVA 0x31679D4]
// Nekki.SF2.GUI.Menu.MenuMaterialUI$$set_Material @ RVA 0x31679D4

void Nekki_SF2_GUI_Menu_MenuMaterialUI__set_Material
               (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,HBNENINHPGF_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).FICNNKFIABO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Menu_MenuMaterialUI__Refresh(__this,method_00);
  return;
}


// ===== public int get_MaterialCount()  [RVA 0x3167AB0]
// Nekki.SF2.GUI.Menu.MenuMaterialUI$$get_MaterialCount @ RVA 0x3167AB0

int32_t Nekki_SF2_GUI_Menu_MenuMaterialUI__get_MaterialCount
                  (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* catch() { ... } // from try @ 03267a80 with catch @ 03267ab0 */
                    /* catch() { ... } // from try @ 032678e0 with catch @ 03267ab4 */
                    /* catch() { ... } // from try @ 03267918 with catch @ 03267ab8 */
                    /* catch() { ... } // from try @ 03267890 with catch @ 03267abc */
                    /* catch() { ... } // from try @ 03267834 with catch @ 03267ac0 */
  if ((DAT_045668cb & 1) == 0) {
                    /* try { // try from 03267ad0 to 03367ad3 has its CatchHandler @ 03267ae4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668cb = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03267ad0 with catch @ 03267ae4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
                    /* try { // try from 03267b24 to 03367b4b has its CatchHandler @ 03267b60 */
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar1 = Roster__FCPIAEEKGEL(__this_00,(__this->fields).FICNNKFIABO,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* try { // try from 03267b4c to 03367b57 has its CatchHandler @ 0326758c */
  return -1;
}


// ===== public void Refresh()  [RVA 0x31679F0]
// Nekki.SF2.GUI.Menu.MenuMaterialUI$$Refresh @ RVA 0x31679F0

void Nekki_SF2_GUI_Menu_MenuMaterialUI__Refresh
               (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  HBNENINHPGF_o *pHVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  int32_t local_14;
  
                    /* try { // try from 032679f0 to 03367a7f has its CatchHandler @ 0326758c */
  pHVar3 = (__this->fields).FICNNKFIABO;
  if (pHVar3 == (HBNENINHPGF_o *)0x0) {
                    /* try { // try from 03267a88 to 03367a8b has its CatchHandler @ 0326758c */
                    /* try { // try from 03267a8c to 03367a8f has its CatchHandler @ 03267a98 */
                    /* try { // try from 03267a90 to 03367acf has its CatchHandler @ 0326758c */
    CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    bVar1 = false;
LAB_03267a98:
                    /* catch() { ... } // from try @ 03267a8c with catch @ 03267a98 */
                    /* catch() { ... } // from try @ 032679ac with catch @ 03267a9c */
    Util__IHPDCBOFHPA(CMMIJCJOBBF,bVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03267a84 with catch @ 03267aa0 */
                    /* catch() { ... } // from try @ 032678d0 with catch @ 03267aa4 */
                    /* catch() { ... } // from try @ 032679c0 with catch @ 03267aa8 */
    return;
  }
  pNVar4 = (__this->fields)._Icon;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = System_String__op_Inequality
                      ((pNVar4->fields)._TexturePath,(pHVar3->fields)._PGCEKJLODEJ_k__BackingField,
                       (MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar1) {
      pHVar3 = (__this->fields).FICNNKFIABO;
      if ((pHVar3 == (HBNENINHPGF_o *)0x0) ||
         (pNVar4 = (__this->fields)._Icon, pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
      goto LAB_03267aac;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar4,(pHVar3->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    pNVar5 = (__this->fields)._Value;
    local_14 = Nekki_SF2_GUI_Menu_MenuMaterialUI__get_MaterialCount(__this,method_00);
    pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                (pNVar5,pSVar2,(pNVar5->klass->vtable)._75_set_text.method);
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03267a80 to 03367a83 has its CatchHandler @ 03267ab0 */
      bVar1 = true;
                    /* try { // try from 03267a84 to 03367a87 has its CatchHandler @ 03267aa0 */
      goto LAB_03267a98;
    }
  }
LAB_03267aac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03267950 with catch @ 03267aac */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3167B58]
// Nekki.SF2.GUI.Menu.MenuMaterialUI$$.ctor @ RVA 0x3167B58

void Nekki_SF2_GUI_Menu_MenuMaterialUI___ctor
               (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this,MethodInfo *method)

{
                    /* try { // try from 03267b58 to 03367b5f has its CatchHandler @ 03267b60 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

