// TypeDefIndex 681
// Namespace: 
// public class OJJLPLHNGBP.BELGMANHGIJ : PDBDELCMKJG.DGCHKODLPJG<OJJLPLHNGBP.BELGMANHGIJ>
// Fields:
//   private Action<NIEPOJOIFNE> HHBINDOFHDF; // 0x38
//   private Action<GPBHNPOEFDO> HBCDBMFDHDH; // 0x40

// ===== public static OJJLPLHNGBP.BELGMANHGIJ EOHMFJFFFIN()  [RVA 0x3030360]
// OJJLPLHNGBP.BELGMANHGIJ$$EOHMFJFFFIN @ RVA 0x3030360

OJJLPLHNGBP_BELGMANHGIJ_o * OJJLPLHNGBP_BELGMANHGIJ__EOHMFJFFFIN(MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  if ((DAT_04565cf4 & 1) == 0) {
    FUN_01bab630(&OJJLPLHNGBP_BELGMANHGIJ_TypeInfo);
    DAT_04565cf4 = 1;
  }
  auVar1 = thunk_FUN_01bda818(OJJLPLHNGBP_BELGMANHGIJ_TypeInfo);
  OJJLPLHNGBP_BELGMANHGIJ___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== protected override void ALFGGEHJPGL()  [RVA 0x30303F8]
// OJJLPLHNGBP.BELGMANHGIJ$$ALFGGEHJPGL @ RVA 0x30303F8

void OJJLPLHNGBP_BELGMANHGIJ__ALFGGEHJPGL(OJJLPLHNGBP_BELGMANHGIJ_o *__this,MethodInfo *method)

{
  System_InvalidOperationException_o *__this_00;
  System_String_o *message;
  undefined8 uVar1;
  
  if ((DAT_04565cf5 & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_ALFGGEHJPGL__);
    DAT_04565cf5 = 1;
  }
  PDBDELCMKJG_DGCHKODLPJG<object>__ALFGGEHJPGL
            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)__this,
             Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_ALFGGEHJPGL__);
  if (((__this->fields).HHBINDOFHDF != (System_Action_NIEPOJOIFNE__o *)0x0) &&
     ((__this->fields).HBCDBMFDHDH != (System_Action_GPBHNPOEFDO__o *)0x0)) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4155/*"Cannot use both BytesCallback and TextCallback at the same time. Please assign only one callback per request."*/);
    System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar1 = thunk_FUN_01bb9178(&Method_OJJLPLHNGBP_BELGMANHGIJ_ALFGGEHJPGL__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar1);
  }
  return;
}


// ===== public OJJLPLHNGBP.BELGMANHGIJ JLDAALDPGIE(Action<NIEPOJOIFNE> BLMFLPJJMPF)  [RVA 0x303049C]
// OJJLPLHNGBP.BELGMANHGIJ$$JLDAALDPGIE @ RVA 0x303049C

OJJLPLHNGBP_BELGMANHGIJ_o *
OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE
          (OJJLPLHNGBP_BELGMANHGIJ_o *__this,System_Action_NIEPOJOIFNE__o *BLMFLPJJMPF,
          MethodInfo *method)

{
  (__this->fields).HHBINDOFHDF = BLMFLPJJMPF;
  thunk_FUN_01c20e04();
  return __this;
}


// ===== public OJJLPLHNGBP HFMIGKLONNL()  [RVA 0x30304B8]
// OJJLPLHNGBP.BELGMANHGIJ$$HFMIGKLONNL @ RVA 0x30304B8

OJJLPLHNGBP_o *
OJJLPLHNGBP_BELGMANHGIJ__HFMIGKLONNL(OJJLPLHNGBP_BELGMANHGIJ_o *__this,MethodInfo *method)

{
  System_TimeSpan_o MINHPKOPAIE;
  System_Threading_CancellationToken_o DEMAKGLNJNN;
  Il2CppObject *OKECKCEAHNA;
  System_Action_NIEPOJOIFNE__o *MBCKEPCPMGJ;
  System_Collections_Generic_List_ValueTuple_string__string___o *__this_00;
  System_ValueTuple_string__string__array *EJAPBMFFKII;
  OJJLPLHNGBP_o *__this_01;
  System_Action_GPBHNPOEFDO__o *EFGLFBIKBHB;
  System_String_o *CJFAPGEEPLM;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if ((DAT_04565cf6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_string>>_ToArray__);
    FUN_01bab630(&OJJLPLHNGBP_TypeInfo);
    DAT_04565cf6 = 1;
  }
  (*(__this->klass->vtable)._4_ALFGGEHJPGL.methodPtr)
            (__this,(__this->klass->vtable)._4_ALFGGEHJPGL.method);
  __this_00 = (__this->fields).super.PADLEGCJHIA;
  if (__this_00 != (System_Collections_Generic_List_ValueTuple_string__string___o *)0x0) {
    MINHPKOPAIE.fields._ticks =
         (System_TimeSpan_Fields)(__this->fields).super.KBFOKFPKAKN.fields._ticks;
    OKECKCEAHNA = (__this->fields).super.OGFMJIABHHI;
    CJFAPGEEPLM = (__this->fields).super.PHONOLEMBHN;
    EJAPBMFFKII = (System_ValueTuple_string__string__array *)
                  System_Collections_Generic_List<ValueTuple<object,_object>>__ToArray
                            ((System_Collections_Generic_List_T__o *)__this_00,
                             Method_System_Collections_Generic_List<ValueTuple<string,_string>>_ToArray__
                            );
    DEMAKGLNJNN.fields._source =
         (System_Threading_CancellationToken_Fields)
         (__this->fields).super.DKICFPOCAFF.fields._source;
    MBCKEPCPMGJ = (__this->fields).HHBINDOFHDF;
    EFGLFBIKBHB = (__this->fields).HBCDBMFDHDH;
    __this_01 = (OJJLPLHNGBP_o *)thunk_FUN_01bda818(OJJLPLHNGBP_TypeInfo);
    OJJLPLHNGBP___ctor(__this_01,CJFAPGEEPLM,MINHPKOPAIE,OKECKCEAHNA,EJAPBMFFKII,DEMAKGLNJNN,
                       MBCKEPCPMGJ,EFGLFBIKBHB,in_stack_ffffffffffffffa0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30303B0]
// OJJLPLHNGBP.BELGMANHGIJ$$.ctor @ RVA 0x30303B0

void OJJLPLHNGBP_BELGMANHGIJ___ctor(OJJLPLHNGBP_BELGMANHGIJ_o *__this,MethodInfo *method)

{
  if ((DAT_04565cf7 & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>__ctor__);
    DAT_04565cf7 = 1;
  }
  PDBDELCMKJG_DGCHKODLPJG<object>___ctor
            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)__this,
             Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>__ctor__);
  return;
}


// ===== public OJJLPLHNGBP.BELGMANHGIJ JLDAALDPGIE(Action<GPBHNPOEFDO> BLMFLPJJMPF)  [RVA 0x3030598]
// OJJLPLHNGBP.BELGMANHGIJ$$JLDAALDPGIE @ RVA 0x3030598

OJJLPLHNGBP_BELGMANHGIJ_o *
OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE
          (OJJLPLHNGBP_BELGMANHGIJ_o *__this,System_Action_GPBHNPOEFDO__o *BLMFLPJJMPF,
          MethodInfo *method)

{
  (__this->fields).HBCDBMFDHDH = BLMFLPJJMPF;
  thunk_FUN_01c20e04();
  return __this;
}

