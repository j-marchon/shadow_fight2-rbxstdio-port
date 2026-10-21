// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeImageCell$$SetContentScale @ RVA 0x3571580

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeImageCell__SetContentScale
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeImageCell_o *__this,
               float JKOJPEKLBCI,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *transform;
  
                    /* try { // try from 03671584 to 0377158b has its CatchHandler @ 03673374 */
  __this_00 = (__this->fields)._image;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0367159c to 037715a3 has its CatchHandler @ 03673394 */
                    /* try { // try from 036715a4 to 037715cf has its CatchHandler @ 036733a8 */
    UnityEngine_TransformExtensions__SetLocalScale(transform,JKOJPEKLBCI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

