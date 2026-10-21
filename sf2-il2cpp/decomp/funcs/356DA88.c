// Nekki.SF2.GUI.Menu.MainMenu$$UpdateRaidRating @ RVA 0x356DA88

void Nekki_SF2_GUI_Menu_MainMenu__UpdateRaidRating
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  MainMenuRaidRatingPanel_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366da98 to 0376da9f has its CatchHandler @ 036731f8 */
  if ((DAT_04568c45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0366dab0 to 0376dab7 has its CatchHandler @ 03672eb0 */
    DAT_04568c45 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    x = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
                    /* try { // try from 0366dac8 to 0376dacf has its CatchHandler @ 03672eac */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
                    /* try { // try from 0366dadc to 0376dae3 has its CatchHandler @ 03672ea8 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = *(MainMenuRaidRatingPanel_o **)&(__this->fields)._MaterialsMoveDuration;
      if (__this_00 != (MainMenuRaidRatingPanel_o *)0x0) {
                    /* try { // try from 0366daf4 to 0376dafb has its CatchHandler @ 03672ea4 */
                    /* try { // try from 0366dafc to 0376db0b has its CatchHandler @ 03672ea0 */
        MainMenuRaidRatingPanel__UpdateValues(__this_00,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

