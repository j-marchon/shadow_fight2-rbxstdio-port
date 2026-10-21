// Nekki.SF2.GUI.Menu.MainMenu$$set_IsEnabled @ RVA 0x356DD24

void Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_Image_o *__this_00;
  
                    /* try { // try from 0366dd28 to 0376dd2f has its CatchHandler @ 03672e44 */
  bVar1 = (__this->fields).super.__IsReleased_k__BackingField;
  (__this->fields).super.field_0x16 = CJNHFNHJHPE;
  if (bVar1 == false) {
                    /* try { // try from 0366dd40 to 0376dd47 has its CatchHandler @ 03672e40 */
                    /* try { // try from 0366dd48 to 0376dd57 has its CatchHandler @ 036731ec */
    Util__IHPDCBOFHPA((__this->fields)._settingsDlgPrefab,(bool)(~CJNHFNHJHPE & 1),(MethodInfo *)0x0
                     );
    if ((__this->fields).super.field_0x16 == '\0') {
                    /* try { // try from 0366dd60 to 0376dd6f has its CatchHandler @ 03672e3c */
      __this_00 = (__this->fields)._backgroundPicture;
      if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366dd80 to 0376dd87 has its CatchHandler @ 03672e38 */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&(__this_00->fields).super.super.m_OnDirtyMaterialCallback + 4) != '\0') {
        Nekki_SF2_GUI_Menu_MenuScroll__Collapse
                  ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}

