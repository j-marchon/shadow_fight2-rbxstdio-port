// Nekki.SF2.GUI.SpriteRendererQuality$$ChangeSprite @ RVA 0x310CF4C

void Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,UnityEngine_Sprite_o *DMMLPNCPPHD,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 0320cf58 to 0330cf5f has its CatchHandler @ 0320cfd8 */
                    /* try { // try from 0320cf6c to 0330cf77 has its CatchHandler @ 0320cfd4 */
  if ((DAT_04566556 & 1) == 0) {
                    /* try { // try from 0320cf80 to 0330cfa3 has its CatchHandler @ 0320cfd0 */
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566556 = 1;
  }
  pUVar2 = (__this->fields).OMLKINHHMLE;
                    /* try { // try from 0320cfa4 to 0330cfc3 has its CatchHandler @ 0320ce90 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 0320cfc4 to 0330cfc7 has its CatchHandler @ 0320cfcc */
                    /* try { // try from 0320cfc8 to 0330cfe7 has its CatchHandler @ 0320ce90 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cfc4 with catch @ 0320cfcc
                        */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cf80 with catch @ 0320cfd0
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cf6c with catch @ 0320cfd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cf58 with catch @ 0320cfd8
                        */
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)DMMLPNCPPHD,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = (__this->fields).OMLKINHHMLE;
      if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite(pUVar2,DMMLPNCPPHD,(MethodInfo *)0x0);
        __this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        fVar4 = (__this->fields).EJBDDOCDMEE.fields.x;
        fVar5 = (__this->fields).EJBDDOCDMEE.fields.y;
                    /* catch() { ... } // from try @ 0320cfe8 with catch @ 0320d02c */
        fVar6 = (__this->fields).EJBDDOCDMEE.fields.z;
                    /* try { // try from 0320d034 to 0330d03b has its CatchHandler @ 0320d050 */
                    /* try { // try from 0320d03c to 0330d047 has its CatchHandler @ 0320ce90 */
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(FGKGKDEJCOG_TypeInfo);
        }
                    /* try { // try from 0320d048 to 0330d04f has its CatchHandler @ 0320d050 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320d034 with catch @ 0320d050
                       catch(type#2 @ 00000000) { ... } // from try @ 0320d048 with catch @ 0320d050
                        */
        if (DAT_04565e5d == '\0') {
                    /* try { // try from 0320d054 to 0330d0e3 has its CatchHandler @ 0320d054
                       catch() { ... } // from try @ 0320d054 with catch @ 0320d054
                       catch() { ... } // from try @ 0320d118 with catch @ 0320d054
                       catch() { ... } // from try @ 0320d140 with catch @ 0320d054
                       catch() { ... } // from try @ 0320d16c with catch @ 0320d054
                       catch() { ... } // from try @ 0320d19c with catch @ 0320d054 */
          FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
          DAT_04565e5d = '\x01';
        }
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          fVar3 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
          value.fields.z = fVar6 * fVar3;
          value.fields.y = fVar5 * fVar3;
          value.fields.x = fVar4 * fVar3;
          UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0320cfe8 to 0330cfeb has its CatchHandler @ 0320d02c */
                    /* try { // try from 0320cfec to 0330d033 has its CatchHandler @ 0320ce90 */
  return;
}

