// Nekki.SF2.GUI.Profile.KeyIcon$$Refresh @ RVA 0x3128D64

void Nekki_SF2_GUI_Profile_KeyIcon__Refresh
               (Nekki_SF2_GUI_Profile_KeyIcon_o *__this,System_String_o *DMCFDIBHCPD,
               float HDLADBMEOCC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  
  pNVar2 = (__this->fields)._Icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,DMCFDIBHCPD,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Icon;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      auVar1._4_8_ = 0;
      auVar1._0_4_ = -HDLADBMEOCC;
      UnityEngine_Transform__set_localEulerAngles
                (__this_00,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

