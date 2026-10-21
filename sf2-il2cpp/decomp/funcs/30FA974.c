// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeColorCell$$Init @ RVA 0x30FA974

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeColorCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeColorCell_o *__this,
               IILNJJJFGLL_o *IMMNELPBGIF,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  System_String_o *pSVar3;
  System_String_o *str3;
  IILNJJJFGLL_c *local_50;
  void *pvStack_48;
  
                    /* try { // try from 031fa99c to 032fa9f3 has its CatchHandler @ 031fab14 */
  if ((DAT_04566497 & 1) == 0) {
    FUN_01bab630(&AAFFHLFBLFN_TypeInfo);
    FUN_01bab630(&StringLiteral_4216);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_4393);
    FUN_01bab630(&StringLiteral_4389);
    FUN_01bab630(&StringLiteral_4388);
    DAT_04566497 = 1;
  }
  local_50 = (IILNJJJFGLL_c *)0x0;
  pvStack_48 = (void *)0x0;
                    /* try { // try from 031faa04 to 032faa0f has its CatchHandler @ 031fab18 */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_o *)__this,IMMNELPBGIF,
             MGFBPKIBNJI,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (IILNJJJFGLL_o *)0x0) {
                    /* try { // try from 031faa20 to 032faa2b has its CatchHandler @ 031fab14 */
    bVar1 = (AAFFHLFBLFN_TypeInfo->_2).naturalAligment;
    if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) {
                    /* try { // try from 031faa2c to 032faac7 has its CatchHandler @ 031fa480 */
      IMMNELPBGIF = (IILNJJJFGLL_o *)0x0;
    }
    else if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)AAFFHLFBLFN_TypeInfo) {
      IMMNELPBGIF = (IILNJJJFGLL_o *)0x0;
    }
  }
  pNVar2 = (__this->fields)._squareShadow;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_4389,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._squareBig;
    if (((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
        (Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_4388,(MethodInfo *)0x0),
        IMMNELPBGIF != (IILNJJJFGLL_o *)0x0)) &&
       (pNVar2 = (__this->fields)._squareBig, pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                ((ulong)*(uint *)&IMMNELPBGIF[1].klass,
                 *(undefined4 *)((long)&IMMNELPBGIF[1].klass + 4),
                 *(undefined4 *)&IMMNELPBGIF[1].monitor,
                 *(undefined4 *)((long)&IMMNELPBGIF[1].monitor + 4),pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      pNVar2 = (__this->fields)._squareSmall;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_4393,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._squareSmall;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 031faac8 to 032faacf has its CatchHandler @ 031fab24 */
                    /* try { // try from 031faad0 to 032faad3 has its CatchHandler @ 031fab0c */
                    /* try { // try from 031faad4 to 032faad7 has its CatchHandler @ 031fab08 */
                    /* try { // try from 031faad8 to 032faadb has its CatchHandler @ 031fab00 */
                    /* try { // try from 031faadc to 032faae3 has its CatchHandler @ 031fab04 */
                    /* try { // try from 031faae4 to 032faae7 has its CatchHandler @ 031fab00 */
                    /* try { // try from 031faae8 to 032faaeb has its CatchHandler @ 031fa480 */
                    /* try { // try from 031faaec to 032faaef has its CatchHandler @ 031faaf8 */
                    /* try { // try from 031faaf0 to 032fab43 has its CatchHandler @ 031fa480 */
          (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                    ((ulong)*(uint *)&IMMNELPBGIF[2].klass,
                     *(undefined4 *)((long)&IMMNELPBGIF[2].klass + 4),
                     *(undefined4 *)&IMMNELPBGIF[2].monitor,
                     *(undefined4 *)((long)&IMMNELPBGIF[2].monitor + 4),pNVar2,
                     (pNVar2->klass->vtable)._23_set_color.method);
                    /* catch() { ... } // from try @ 031faaec with catch @ 031faaf8 */
          pvStack_48 = IMMNELPBGIF[1].monitor;
          local_50 = IMMNELPBGIF[1].klass;
                    /* catch() { ... } // from try @ 031fa908 with catch @ 031faafc */
                    /* catch() { ... } // from try @ 031faad8 with catch @ 031fab00
                       catch() { ... } // from try @ 031faae4 with catch @ 031fab00 */
                    /* catch() { ... } // from try @ 031faadc with catch @ 031fab04 */
                    /* catch() { ... } // from try @ 031faad4 with catch @ 031fab08 */
                    /* catch() { ... } // from try @ 031faad0 with catch @ 031fab0c */
                    /* catch() { ... } // from try @ 031fa918 with catch @ 031fab10 */
          pSVar3 = (System_String_o *)FUN_01ca4df0(&local_50,0,0,0);
                    /* catch() { ... } // from try @ 031fa99c with catch @ 031fab14
                       catch() { ... } // from try @ 031faa20 with catch @ 031fab14 */
          pvStack_48 = IMMNELPBGIF[2].monitor;
          local_50 = IMMNELPBGIF[2].klass;
                    /* catch() { ... } // from try @ 031fa934 with catch @ 031fab18
                       catch() { ... } // from try @ 031faa04 with catch @ 031fab18 */
                    /* catch() { ... } // from try @ 031fa8a0 with catch @ 031fab1c */
                    /* catch() { ... } // from try @ 031fa844 with catch @ 031fab20 */
                    /* catch() { ... } // from try @ 031faac8 with catch @ 031fab24 */
          str3 = (System_String_o *)FUN_01ca4df0(&local_50,0,0,0);
                    /* try { // try from 031fab44 to 032fab47 has its CatchHandler @ 031fab54 */
          pSVar3 = System_String__Concat
                             (StringLiteral_4216,pSVar3,StringLiteral_167,str3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031fab44 with catch @ 031fab54 */
          UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 031fab64 to 032fabd3 has its CatchHandler @ 031fabe8 */
          (*(__this->klass->vtable)._52_SetContentScale.methodPtr)
                    (0x3f800000,__this,(__this->klass->vtable)._52_SetContentScale.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

