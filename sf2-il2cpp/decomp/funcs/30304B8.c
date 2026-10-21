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

