// Nekki.SF2.GUI.Map.MapScene$$NICMCKIBIAC @ RVA 0x3587C2C

void Nekki_SF2_GUI_Map_MapScene__NICMCKIBIAC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,UnityEngine_Color_o GKBNFBINIIP,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar1;
  
  pNVar1 = (__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_StoryMapContainer_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03687c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._8_SetZonesBackgroundMask.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._8_SetZonesBackgroundMask.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(GKBNFBINIIP.fields.r,GKBNFBINIIP.fields.g,GKBNFBINIIP.fields.b,GKBNFBINIIP.fields.a);
}

