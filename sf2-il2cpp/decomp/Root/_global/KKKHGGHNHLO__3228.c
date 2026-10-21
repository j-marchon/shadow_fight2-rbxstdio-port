// TypeDefIndex 3228
// Namespace: 
// public class KKKHGGHNHLO : BMNKDDCJACM
// Fields:
//   private readonly SpriteRenderer IAKCIALILLN; // 0x10

// ===== public override float JLKDMMHCFDD()  [RVA 0x3505494]
// KKKHGGHNHLO$$JLKDMMHCFDD @ RVA 0x3505494

float KKKHGGHNHLO__JLKDMMHCFDD(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  UnityEngine_Color_o UVar1;
  
                    /* try { // try from 03605498 to 0370549b has its CatchHandler @ 036054ac */
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar1 = UnityEngine_SpriteRenderer__get_color(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03605498 with catch @ 036054ac */
    return UVar1.fields.a;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036054b4 to 0370551b has its CatchHandler @ 03605530 */
  FUN_01bab8c8();
}


// ===== public override Vector2 GGOLGLLAOEP()  [RVA 0x35054B8]
// KKKHGGHNHLO$$GGOLGLLAOEP @ RVA 0x35054B8

UnityEngine_Vector2_o KKKHGGHNHLO__GGOLGLLAOEP(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.y = 0.5;
  UVar1.fields.x = 0.5;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// ===== public override void IIMBMIOOJGB(SpriteDrawMode CJNHFNHJHPE)  [RVA 0x35054C4]
// KKKHGGHNHLO$$IIMBMIOOJGB @ RVA 0x35054C4

void KKKHGGHNHLO__IIMBMIOOJGB(KKKHGGHNHLO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UnityEngine_SpriteRenderer__set_drawMode(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override SpriteDrawMode PCLDIKNPONG()  [RVA 0x35054E0]
// KKKHGGHNHLO$$PCLDIKNPONG @ RVA 0x35054E0

int32_t KKKHGGHNHLO__PCLDIKNPONG(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_SpriteRenderer_o *__this_00;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    iVar1 = UnityEngine_SpriteRenderer__get_drawMode(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Sprite DBHCDDAICPJ()  [RVA 0x35054FC]
// KKKHGGHNHLO$$DBHCDDAICPJ @ RVA 0x35054FC

UnityEngine_Sprite_o * KKKHGGHNHLO__DBHCDDAICPJ(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  UnityEngine_Sprite_o *pUVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    pUVar1 = UnityEngine_SpriteRenderer__get_sprite(__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(GameObject CMMIJCJOBBF)  [RVA 0x3505518]
// KKKHGGHNHLO$$.ctor @ RVA 0x3505518

void KKKHGGHNHLO___ctor(KKKHGGHNHLO_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
                       MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  
                    /* try { // try from 0360551c to 03705527 has its CatchHandler @ 0360509c */
                    /* try { // try from 03605528 to 0370552f has its CatchHandler @ 03605530 */
                    /* catch() { ... } // from try @ 036054b4 with catch @ 03605530
                       catch() { ... } // from try @ 03605528 with catch @ 03605530 */
  if ((DAT_04568894 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<SpriteRenderer>__);
    DAT_04568894 = 1;
  }
  BMNKDDCJACM___ctor((BMNKDDCJACM_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_SpriteRenderer_o *)
           Util__OHBILOGJCLA<object>(CMMIJCJOBBF,Method_Util_OHBILOGJCLA<SpriteRenderer>__);
  (__this->fields).IAKCIALILLN = pUVar1;
  thunk_FUN_01c20e04(&__this->fields,pUVar1);
  return;
}


// ===== public override void KDMBCCPCLAJ(float CJNHFNHJHPE)  [RVA 0x3505588]
// KKKHGGHNHLO$$KDMBCCPCLAJ @ RVA 0x3505588

void KKKHGGHNHLO__KDMBCCPCLAJ(KKKHGGHNHLO_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o value;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar2 = UnityEngine_SpriteRenderer__get_color(pUVar1,(MethodInfo *)0x0);
    value.fields.b = UVar2.fields.b;
    pUVar1 = (__this->fields).IAKCIALILLN;
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      value.fields.a = CJNHFNHJHPE;
      value.fields.r = (float)(int)UVar2.fields._0_8_;
      value.fields.g = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
      UnityEngine_SpriteRenderer__set_color(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IFMPFHKICDM(Sprite CJNHFNHJHPE)  [RVA 0x35055C8]
// KKKHGGHNHLO$$IFMPFHKICDM @ RVA 0x35055C8

void KKKHGGHNHLO__IFMPFHKICDM
               (KKKHGGHNHLO_o *__this,UnityEngine_Sprite_o *CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UnityEngine_SpriteRenderer__set_sprite(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Color NKCPPFNFDEO()  [RVA 0x35055E4]
// KKKHGGHNHLO$$NKCPPFNFDEO @ RVA 0x35055E4

UnityEngine_Color_o KKKHGGHNHLO__NKCPPFNFDEO(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  UnityEngine_Color_Fields UVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar1 = (UnityEngine_Color_Fields)
            UnityEngine_SpriteRenderer__get_color(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Color_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void AHEDIEFFBMC(Vector2 CJNHFNHJHPE)  [RVA 0x3505600]
// KKKHGGHNHLO$$AHEDIEFFBMC @ RVA 0x3505600

void KKKHGGHNHLO__AHEDIEFFBMC
               (KKKHGGHNHLO_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UnityEngine_SpriteRenderer__set_size(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void ALNPMBFHOMO(Vector2 CJNHFNHJHPE)  [RVA 0x350561C]
// KKKHGGHNHLO$$ALNPMBFHOMO @ RVA 0x350561C

void KKKHGGHNHLO__ALNPMBFHOMO
               (KKKHGGHNHLO_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  return;
}


// ===== public override void IDBKLACIJIK(Color CJNHFNHJHPE)  [RVA 0x3505620]
// KKKHGGHNHLO$$IDBKLACIJIK @ RVA 0x3505620

void KKKHGGHNHLO__IDBKLACIJIK
               (KKKHGGHNHLO_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UnityEngine_SpriteRenderer__set_color(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Vector2 KKKNIFBPMFH()  [RVA 0x350563C]
// KKKHGGHNHLO$$KKKNIFBPMFH @ RVA 0x350563C

UnityEngine_Vector2_o KKKHGGHNHLO__KKKNIFBPMFH(KKKHGGHNHLO_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_SpriteRenderer__get_size(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

