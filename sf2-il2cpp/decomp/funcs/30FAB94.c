// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeColorCell$$SetContentScale @ RVA 0x30FAB94

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeColorCell__SetContentScale
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeColorCell_o *__this,
               float JKOJPEKLBCI,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pNVar1 = (__this->fields)._squareShadow;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(pUVar2,JKOJPEKLBCI,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._squareBig;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 031fabd4 to 032fabdf has its CatchHandler @ 031fa480 */
      UnityEngine_TransformExtensions__SetLocalScale(pUVar2,JKOJPEKLBCI,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._squareSmall;
                    /* try { // try from 031fabe0 to 032fabe7 has its CatchHandler @ 031fabe8 */
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch() { ... } // from try @ 031fab64 with catch @ 031fabe8
                       catch() { ... } // from try @ 031fabe0 with catch @ 031fabe8 */
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(pUVar2,JKOJPEKLBCI,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

