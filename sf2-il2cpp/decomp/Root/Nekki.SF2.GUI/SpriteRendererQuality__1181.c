// TypeDefIndex 1181
// Namespace: Nekki.SF2.GUI
// [RequireComponent(typeof(SpriteRenderer))]
// public class SpriteRendererQuality : MonoBehaviour
// Fields:
//   private string _atlas; // 0x20
//   private string _sprite; // 0x28
//   private SpriteRenderer OMLKINHHMLE; // 0x30
//   private Vector3 EJBDDOCDMEE; // 0x38

// ===== private void IGLCHJBMLCO()  [RVA 0x310CDDC]
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


// ===== public void .ctor()  [RVA 0x310CF44]
// Nekki.SF2.GUI.SpriteRendererQuality$$.ctor @ RVA 0x310CF44

void Nekki_SF2_GUI_SpriteRendererQuality___ctor
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ChangeSprite(Sprite DMMLPNCPPHD)  [RVA 0x310CF4C]
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


// ===== private void Awake()  [RVA 0x310D0B8]
// Nekki.SF2.GUI.SpriteRendererQuality$$Awake @ RVA 0x310D0B8

void Nekki_SF2_GUI_SpriteRendererQuality__Awake
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  System_Action_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar2;
  
                    /* try { // try from 0320d0e4 to 0330d0eb has its CatchHandler @ 0320d150 */
  if ((DAT_04566557 & 1) == 0) {
                    /* try { // try from 0320d0f8 to 0330d0ff has its CatchHandler @ 0320d14c */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0320d108 to 0330d117 has its CatchHandler @ 0320d144 */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<SpriteRenderer>__);
                    /* try { // try from 0320d118 to 0330d13b has its CatchHandler @ 0320d054 */
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SpriteRendererQuality_IGLCHJBMLCO__);
    DAT_04566557 = 1;
  }
  pUVar1 = (UnityEngine_SpriteRenderer_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<SpriteRenderer>__);
                    /* try { // try from 0320d13c to 0330d13f has its CatchHandler @ 0320d148 */
                    /* try { // try from 0320d140 to 0330d167 has its CatchHandler @ 0320d054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d108 with catch @ 0320d144
                        */
  (__this->fields).OMLKINHHMLE = pUVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d13c with catch @ 0320d148
                        */
  thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d0f8 with catch @ 0320d14c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d0e4 with catch @ 0320d150
                        */
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
                    /* try { // try from 0320d168 to 0330d16b has its CatchHandler @ 0320d18c */
                    /* try { // try from 0320d16c to 0330d193 has its CatchHandler @ 0320d054 */
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FGKGKDEJCOG__GJOHNMGHOAF(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0320d168 with catch @ 0320d18c */
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0320d194 to 0330d19b has its CatchHandler @ 0320d1b0 */
    UVar2 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0320d19c to 0330d1a7 has its CatchHandler @ 0320d054 */
    (__this->fields).EJBDDOCDMEE.fields.x = UVar2.fields.x;
    (__this->fields).EJBDDOCDMEE.fields.y = UVar2.fields.y;
    (__this->fields).EJBDDOCDMEE.fields.z = UVar2.fields.z;
                    /* try { // try from 0320d1a8 to 0330d1af has its CatchHandler @ 0320d1b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320d194 with catch @ 0320d1b0
                       catch(type#2 @ 00000000) { ... } // from try @ 0320d1a8 with catch @ 0320d1b0
                        */
                    /* try { // try from 0320d1b4 to 0330d27b has its CatchHandler @ 0320d1b4
                       catch() { ... } // from try @ 0320d1b4 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2b4 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2d8 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2fc with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d34c with catch @ 0320d1b4 */
    Nekki_SF2_GUI_SpriteRendererQuality__IGLCHJBMLCO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x310D1C0]
// Nekki.SF2.GUI.SpriteRendererQuality$$OnDestroy @ RVA 0x310D1C0

void Nekki_SF2_GUI_SpriteRendererQuality__OnDestroy
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566558 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SpriteRendererQuality_IGLCHJBMLCO__);
    DAT_04566558 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FGKGKDEJCOG__APKCEPAKKDG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void ChangeColor(Color BCPMKLLLFDL)  [RVA 0x310D264]
// Nekki.SF2.GUI.SpriteRendererQuality$$ChangeColor @ RVA 0x310D264

void Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,UnityEngine_Color_o BCPMKLLLFDL,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  
                    /* try { // try from 0320d27c to 0330d283 has its CatchHandler @ 0320d2e8 */
                    /* try { // try from 0320d290 to 0330d29b has its CatchHandler @ 0320d2e4 */
  if ((DAT_04566559 & 1) == 0) {
                    /* try { // try from 0320d2a4 to 0330d2b3 has its CatchHandler @ 0320d2dc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566559 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320d2b4 to 0330d2d3 has its CatchHandler @ 0320d1b4 */
  pUVar2 = (__this->fields).OMLKINHHMLE;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0320d2d4 to 0330d2d7 has its CatchHandler @ 0320d2e0 */
  if (bVar1) {
                    /* try { // try from 0320d2d8 to 0330d2f7 has its CatchHandler @ 0320d1b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d2a4 with catch @ 0320d2dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d2d4 with catch @ 0320d2e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d290 with catch @ 0320d2e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d27c with catch @ 0320d2e8
                        */
    return;
  }
  pUVar2 = (__this->fields).OMLKINHHMLE;
  if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 0320d2f8 to 0330d2fb has its CatchHandler @ 0320d33c */
                    /* try { // try from 0320d2fc to 0330d343 has its CatchHandler @ 0320d1b4 */
    UnityEngine_SpriteRenderer__set_color(pUVar2,BCPMKLLLFDL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

