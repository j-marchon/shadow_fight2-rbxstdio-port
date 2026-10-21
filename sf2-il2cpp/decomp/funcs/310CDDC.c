// Nekki.SF2.GUI.SpriteRendererQuality$$IGLCHJBMLCO @ RVA 0x310CDDC

void Nekki_SF2_GUI_SpriteRendererQuality__IGLCHJBMLCO
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  System_String_o *HCAAAAMDCNO;
  UnityEngine_SpriteRenderer_o *__this_00;
  bool bVar1;
  UnityEngine_Sprite_o *value;
  UnityEngine_Transform_o *__this_01;
  System_String_o *OOKEKJMFKPE;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value_00;
  
                    /* try { // try from 0320cdf4 to 0330ce17 has its CatchHandler @ 0320cd1c */
  if ((DAT_04566555 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
                    /* try { // try from 0320ce18 to 0330ce1b has its CatchHandler @ 0320ce20 */
                    /* try { // try from 0320ce1c to 0330ce43 has its CatchHandler @ 0320cd1c */
    DAT_04566555 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ce18 with catch @ 0320ce20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cdd0 with catch @ 0320ce24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cdc0 with catch @ 0320ce28
                        */
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields)._atlas,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320cdac with catch @ 0320ce2c
                        */
  if ((bVar1) ||
     (bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields)._sprite,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 0320ce44 to 0330ce47 has its CatchHandler @ 0320ce68 */
                    /* try { // try from 0320ce48 to 0330ce6f has its CatchHandler @ 0320cd1c */
    return;
  }
  HCAAAAMDCNO = (__this->fields)._sprite;
  __this_00 = (__this->fields).OMLKINHHMLE;
  OOKEKJMFKPE = (__this->fields)._atlas;
                    /* catch() { ... } // from try @ 0320ce44 with catch @ 0320ce68 */
                    /* try { // try from 0320ce70 to 0330ce77 has its CatchHandler @ 0320ce8c */
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0320ce78 to 0330ce83 has its CatchHandler @ 0320cd1c */
                    /* try { // try from 0320ce84 to 0330ce8b has its CatchHandler @ 0320ce8c */
  value = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,false,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320ce70 with catch @ 0320ce8c
                       catch(type#2 @ 00000000) { ... } // from try @ 0320ce84 with catch @ 0320ce8c
                        */
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 0320ce90 to 0330cf57 has its CatchHandler @ 0320ce90
                       catch() { ... } // from try @ 0320ce90 with catch @ 0320ce90
                       catch() { ... } // from try @ 0320cfa4 with catch @ 0320ce90
                       catch() { ... } // from try @ 0320cfc8 with catch @ 0320ce90
                       catch() { ... } // from try @ 0320cfec with catch @ 0320ce90
                       catch() { ... } // from try @ 0320d03c with catch @ 0320ce90 */
    UnityEngine_SpriteRenderer__set_sprite(__this_00,value,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar3 = (__this->fields).EJBDDOCDMEE.fields.x;
    fVar4 = (__this->fields).EJBDDOCDMEE.fields.y;
    fVar5 = (__this->fields).EJBDDOCDMEE.fields.z;
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FGKGKDEJCOG_TypeInfo);
    }
    if (DAT_04565e5d == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565e5d = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      fVar2 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
      value_00.fields.z = fVar5 * fVar2;
      value_00.fields.y = fVar4 * fVar2;
      value_00.fields.x = fVar3 * fVar2;
      UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

