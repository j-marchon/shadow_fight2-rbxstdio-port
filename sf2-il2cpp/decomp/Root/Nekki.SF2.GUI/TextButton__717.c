// TypeDefIndex 717
// Namespace: Nekki.SF2.GUI
// public class TextButton : ResolutionButton
// Fields:
//   private LabelAlias _Text; // 0x1A8
//   private Color _NormalTextColor; // 0x1B0
//   private Color _PressedTextColor; // 0x1C0

// ===== public Color get_TextColor()  [RVA 0x303CB38]
// Nekki.SF2.GUI.TextButton$$get_TextColor @ RVA 0x303CB38

UnityEngine_Color_o
Nekki_SF2_GUI_TextButton__get_TextColor(Nekki_SF2_GUI_TextButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float fVar3;
  float in_s1;
  float in_s2;
  float in_s3;
  UnityEngine_Color_o UVar4;
  
                    /* catch() { ... } // from try @ 0313caa8 with catch @ 0313cb38 */
                    /* catch() { ... } // from try @ 0313ca28 with catch @ 0313cb3c */
                    /* catch() { ... } // from try @ 0313ca90 with catch @ 0313cb40
                       catch() { ... } // from try @ 0313cb18 with catch @ 0313cb40 */
                    /* catch() { ... } // from try @ 0313ca18 with catch @ 0313cb44 */
                    /* catch() { ... } // from try @ 0313ca04 with catch @ 0313cb48 */
                    /* catch() { ... } // from try @ 0313ca54 with catch @ 0313cb4c
                       catch() { ... } // from try @ 0313cb10 with catch @ 0313cb4c */
  if ((DAT_04565d96 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0313cb64 to 0323cb67 has its CatchHandler @ 0313cbe4 */
                    /* try { // try from 0313cb68 to 0323cbfb has its CatchHandler @ 0313c904 */
    DAT_04565d96 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Text;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar3 = (float)(*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                             (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
  }
  else {
    fVar3 = (__this->fields)._NormalTextColor.fields.r;
    in_s1 = (__this->fields)._NormalTextColor.fields.g;
    in_s2 = (__this->fields)._NormalTextColor.fields.b;
    in_s3 = (__this->fields)._NormalTextColor.fields.a;
  }
  UVar4.fields.g = in_s1;
  UVar4.fields.r = fVar3;
  UVar4.fields.a = in_s3;
  UVar4.fields.b = in_s2;
  return (UnityEngine_Color_o)UVar4.fields;
}


// ===== public void set_TextColor(Color CJNHFNHJHPE)  [RVA 0x303CBD0]
// Nekki.SF2.GUI.TextButton$$set_TextColor @ RVA 0x303CBD0

void Nekki_SF2_GUI_TextButton__set_TextColor
               (Nekki_SF2_GUI_TextButton_o *__this,UnityEngine_Color_o CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* catch() { ... } // from try @ 0313cb64 with catch @ 0313cbe4 */
                    /* try { // try from 0313cbfc to 0323cc0b has its CatchHandler @ 0313cc20 */
  if ((DAT_04565d97 & 1) == 0) {
                    /* try { // try from 0313cc0c to 0323cc17 has its CatchHandler @ 0313c904 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0313cc18 to 0323cc1f has its CatchHandler @ 0313cc20 */
    DAT_04565d97 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0313cbfc with catch @ 0313cc20
                       catch() { ... } // from try @ 0313cc18 with catch @ 0313cc20 */
  pNVar2 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313cc2c to 0323ccaf has its CatchHandler @ 0313cc2c
                       catch() { ... } // from try @ 0313cc2c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313ce34 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313ce6c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cee8 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cf0c with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313cff0 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d034 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d050 with catch @ 0313cc2c
                       catch() { ... } // from try @ 0313d080 with catch @ 0313cc2c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._Text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313cc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20),CJNHFNHJHPE.fields.r),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._4_8_ >> 0x20),CJNHFNHJHPE.fields.g),
                 CONCAT44((int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20),CJNHFNHJHPE.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),CJNHFNHJHPE.fields.a),pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void DoStateTransition(Selectable.SelectionState HJEBKCDDBAB, bool BPHNPNCDLOA)  [RVA 0x303CC94]
// Nekki.SF2.GUI.TextButton$$DoStateTransition @ RVA 0x303CC94

void Nekki_SF2_GUI_TextButton__DoStateTransition
               (Nekki_SF2_GUI_TextButton_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,
               MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  SFButton__DoStateTransition((SFButton_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
                    /* try { // try from 0313ccb0 to 0323ccb7 has its CatchHandler @ 0313cf1c */
  if (HJEBKCDDBAB == 2) {
    pUVar4 = &(__this->fields)._PressedTextColor;
    pUVar1 = &(__this->fields)._PressedTextColor;
    pUVar2 = &(__this->fields)._PressedTextColor;
                    /* try { // try from 0313ccc4 to 0323cccb has its CatchHandler @ 0313cf34 */
    pUVar3 = &(__this->fields)._PressedTextColor;
  }
  else {
    pUVar4 = &(__this->fields)._NormalTextColor;
    pUVar1 = &(__this->fields)._NormalTextColor;
    pUVar2 = &(__this->fields)._NormalTextColor;
    pUVar3 = &(__this->fields)._NormalTextColor;
  }
                    /* try { // try from 0313ccdc to 0323ccff has its CatchHandler @ 0313cf3c */
  CJNHFNHJHPE.fields.b = (pUVar2->fields).b;
  CJNHFNHJHPE.fields.g = (pUVar1->fields).g;
  CJNHFNHJHPE.fields.r = (pUVar4->fields).r;
  CJNHFNHJHPE.fields.a = (pUVar3->fields).a;
  Nekki_SF2_GUI_TextButton__set_TextColor(__this,CJNHFNHJHPE,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x303CCFC]
// Nekki.SF2.GUI.TextButton$$.ctor @ RVA 0x303CCFC

void Nekki_SF2_GUI_TextButton___ctor(Nekki_SF2_GUI_TextButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}

