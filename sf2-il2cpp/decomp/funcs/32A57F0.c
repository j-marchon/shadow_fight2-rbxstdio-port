// ProfitViewer$$Init @ RVA 0x32A57F0

void ProfitViewer__Init(ProfitViewer_o *__this,System_String_o *OOKEKJMFKPE,
                       System_String_o *HCAAAAMDCNO,System_String_o *HCCNJHGEBBI,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045673ec & 1) == 0) {
    FUN_01bab630(&StringLiteral_19589);
    DAT_045673ec = 1;
  }
  pNVar1 = (__this->fields)._profitImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._profitImage;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier = OOKEKJMFKPE;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE);
      pNVar1 = (__this->fields)._profitImage;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,HCAAAAMDCNO,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._profitImage;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
          (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
          pNVar1 = (__this->fields)._profitMaskImage;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._profitMaskImage;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* try { // try from 033a589c to 034a58ab has its CatchHandler @ 033a58ac */
                    /* catch() { ... } // from try @ 033a57ac with catch @ 033a58ac
                       catch() { ... } // from try @ 033a589c with catch @ 033a58ac */
              *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier =
                   OOKEKJMFKPE;
                    /* try { // try from 033a58b0 to 034a58b3 has its CatchHandler @ 033a58bc */
              thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE
                                );
                    /* try { // try from 033a58b4 to 034a58bf has its CatchHandler @ 033a5704 */
              pNVar1 = (__this->fields)._profitMaskImage;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033a58b0 with catch @ 033a58bc
                        */
              pSVar2 = System_String__Concat(HCAAAAMDCNO,StringLiteral_19589,(MethodInfo *)0x0);
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,pSVar2,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._profitMaskImage;
                if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                  (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                            (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
                  pNVar1 = (__this->fields)._profitMaskImage;
                  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                              (0,0,0,0x3dcccccd,pNVar1,(pNVar1->klass->vtable)._23_set_color.method)
                    ;
                    method_01 = (MethodInfo *)0x0;
                    pSVar2 = System_String__Concat(OOKEKJMFKPE,HCCNJHGEBBI,(MethodInfo *)0x0);
                    ProfitViewer__LFCEOEEBLMM(__this,pSVar2,method_01);
                    ProfitViewer__DBEICCIBFDB(__this,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

