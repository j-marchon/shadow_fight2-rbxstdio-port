// TypeDefIndex 1384
// Namespace: 
// public abstract class OMNMIEMIMKC
// Fields:
//   protected IBACDOKNEIG JBNGADJBDHB; // 0x10

// ===== protected void .ctor(IBACDOKNEIG BKFOLMBMFNP)  [RVA 0x317308C]
// OMNMIEMIMKC$$.ctor @ RVA 0x317308C

void OMNMIEMIMKC___ctor(OMNMIEMIMKC_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
                    /* try { // try from 03273090 to 03373093 has its CatchHandler @ 032730cc */
                    /* try { // try from 03273094 to 03373097 has its CatchHandler @ 032730c8 */
                    /* try { // try from 03273098 to 0337309b has its CatchHandler @ 032730c4 */
                    /* try { // try from 0327309c to 0337309f has its CatchHandler @ 032730c0 */
                    /* try { // try from 032730a0 to 033730f3 has its CatchHandler @ 03272e1c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03272fd8 with catch @ 032730a4 */
  (__this->fields).JBNGADJBDHB = BKFOLMBMFNP;
                    /* catch() { ... } // from try @ 03272fac with catch @ 032730b0 */
  return;
}


// ===== public static OMNMIEMIMKC EOHMFJFFFIN(XmlNode JHMENEKPIBO)  [RVA 0x31730B4]
// OMNMIEMIMKC$$EOHMFJFFFIN @ RVA 0x31730B4

OMNMIEMIMKC_o * OMNMIEMIMKC__EOHMFJFFFIN(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  BGMJBAKBOHL_o *__this;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
                    /* catch() { ... } // from try @ 03272f9c with catch @ 032730b4 */
                    /* catch() { ... } // from try @ 03272f6c with catch @ 032730b8 */
                    /* catch() { ... } // from try @ 03272fc0 with catch @ 032730bc */
                    /* catch() { ... } // from try @ 0327309c with catch @ 032730c0 */
                    /* catch() { ... } // from try @ 03273098 with catch @ 032730c4 */
                    /* catch() { ... } // from try @ 03273094 with catch @ 032730c8 */
  if ((DAT_0456693d & 1) == 0) {
                    /* catch() { ... } // from try @ 03273090 with catch @ 032730cc */
                    /* catch() { ... } // from try @ 03272f88 with catch @ 032730d0 */
                    /* catch() { ... } // from try @ 03272f54 with catch @ 032730d4 */
    FUN_01bab630(&AOPBMPIONHI_TypeInfo);
                    /* catch() { ... } // from try @ 03272f74 with catch @ 032730d8 */
                    /* catch() { ... } // from try @ 03272f40 with catch @ 032730dc */
    FUN_01bab630(&BGMJBAKBOHL_TypeInfo);
    FUN_01bab630(&PCFNBEFFKJM_TypeInfo);
                    /* try { // try from 032730f4 to 033730f7 has its CatchHandler @ 03273118 */
                    /* try { // try from 032730f8 to 0337311f has its CatchHandler @ 03272e1c */
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    auVar2 = FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
                    /* catch() { ... } // from try @ 032730f4 with catch @ 03273118 */
    DAT_0456693d = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03273120 to 03373127 has its CatchHandler @ 0327313c */
                    /* try { // try from 03273128 to 03373133 has its CatchHandler @ 03272e1c */
                    /* try { // try from 03273134 to 0337313b has its CatchHandler @ 0327313c */
    a = (System_String_o *)
        (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                  (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
                    /* catch() { ... } // from try @ 03273120 with catch @ 0327313c
                       catch() { ... } // from try @ 03273134 with catch @ 0327313c */
    bVar1 = System_String__op_Equality(a,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (BGMJBAKBOHL_o *)thunk_FUN_01bda818(AOPBMPIONHI_TypeInfo);
      AOPBMPIONHI___ctor((AOPBMPIONHI_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (BGMJBAKBOHL_o *)thunk_FUN_01bda818(BGMJBAKBOHL_TypeInfo);
        BGMJBAKBOHL___ctor(__this,JHMENEKPIBO,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_9968/*"Operator"*/,(MethodInfo *)0x0);
        __this = (BGMJBAKBOHL_o *)0x0;
        if (bVar1) {
          __this = (BGMJBAKBOHL_o *)thunk_FUN_01bda818(PCFNBEFFKJM_TypeInfo);
          PCFNBEFFKJM___ctor((PCFNBEFFKJM_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
        }
      }
    }
    return (OMNMIEMIMKC_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x3173204]
// OMNMIEMIMKC$$RandomizeObscuredVars @ RVA 0x3173204

void OMNMIEMIMKC__RandomizeObscuredVars(OMNMIEMIMKC_o *__this,MethodInfo *method)

{
  return;
}


// ===== public IBACDOKNEIG NHGGBEACKBD()  [RVA 0x3173208]
// OMNMIEMIMKC$$NHGGBEACKBD @ RVA 0x3173208

int32_t OMNMIEMIMKC__NHGGBEACKBD(OMNMIEMIMKC_o *__this,MethodInfo *method)

{
  return (__this->fields).JBNGADJBDHB;
}

