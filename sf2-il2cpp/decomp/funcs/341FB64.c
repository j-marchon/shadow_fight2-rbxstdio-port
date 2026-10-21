// HEFOANCOHDC$$IDNDFIFCOFO @ RVA 0x341FB64

void HEFOANCOHDC__IDNDFIFCOFO
               (HEFOANCOHDC_o *__this,System_Xml_XmlAttribute_o *CBCJPCKIOPJ,MethodInfo *method)

{
  uint length;
  Il2CppObject *__this_00;
  bool bVar1;
  uint16_t uVar2;
  System_String_o *OAPELGIBHGF;
  NILLKLHKLHG_o *__this_01;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_02;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045680e3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_GetEnumerator__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_045680e3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (CBCJPCKIOPJ != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0351fbdc to 0361fbe3 has its CatchHandler @ 0351fc6c */
                    /* try { // try from 0351fbec to 0361fbfb has its CatchHandler @ 0351fc68 */
    (*(CBCJPCKIOPJ->klass->vtable)._8_get_Name.methodPtr)
              (CBCJPCKIOPJ,(CBCJPCKIOPJ->klass->vtable)._8_get_Name.method);
    OAPELGIBHGF = (System_String_o *)
                  (*(CBCJPCKIOPJ->klass->vtable)._9_get_Value.methodPtr)
                            (CBCJPCKIOPJ,(CBCJPCKIOPJ->klass->vtable)._9_get_Value.method);
                    /* try { // try from 0351fc04 to 0361fc17 has its CatchHandler @ 0351fc60 */
    __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                    /* try { // try from 0351fc20 to 0361fc2f has its CatchHandler @ 0351fc64 */
    NILLKLHKLHG___ctor(__this_01,OAPELGIBHGF,(MethodInfo *)0x0);
    if ((__this_01 != (NILLKLHKLHG_o *)0x0) &&
       (__this_02 = (__this_01->fields).PIDHBKCJIHG,
       __this_02 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) {
                    /* try { // try from 0351fc30 to 0361fc53 has its CatchHandler @ 0351fb44 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
                    /* try { // try from 0351fc54 to 0361fc57 has its CatchHandler @ 0351fc5c */
                    /* try { // try from 0351fc58 to 0361fc83 has its CatchHandler @ 0351fb44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fc54 with catch @ 0351fc5c
                        */
      local_60.fields._list = local_78.fields._list;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fc04 with catch @ 0351fc60
                        */
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fbec with catch @ 0351fc68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351fbdc with catch @ 0351fc6c
                        */
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_MoveNext__
                            );
          __this_00 = local_60.fields._current;
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<NILLKLHKLHG_DIPIFJPCFOE>_Dispose__
                      );
            (*(CBCJPCKIOPJ->klass->vtable)._10_set_Value.methodPtr)
                      (CBCJPCKIOPJ,OAPELGIBHGF,(CBCJPCKIOPJ->klass->vtable)._10_set_Value.method);
            return;
          }
          if ((NILLKLHKLHG_DIPIFJPCFOE_o *)local_60.fields._current ==
              (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0351fc84 to 0361fc87 has its CatchHandler @ 0351fcb0 */
                    /* try { // try from 0351fc88 to 0361fcbf has its CatchHandler @ 0351fb44 */
          pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                             ((NILLKLHKLHG_DIPIFJPCFOE_o *)local_60.fields._current,
                              (MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = System_String__get_Chars(pSVar3,0,(MethodInfo *)0x0);
        } while (uVar2 != 0x5f);
                    /* catch() { ... } // from try @ 0351fc84 with catch @ 0351fcb0 */
        pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0351fcc0 to 0361fcc7 has its CatchHandler @ 0351fcdc */
        pSVar4 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0351fcc8 to 0361fcd3 has its CatchHandler @ 0351fb44 */
        if (pSVar3 == (System_String_o *)0x0) break;
        length = (pSVar4->fields)._stringLength - 1;
        method_00 = (MethodInfo *)(ulong)length;
                    /* try { // try from 0351fcd4 to 0361fcdb has its CatchHandler @ 0351fcdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351fcc0 with catch @ 0351fcdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0351fcd4 with catch @ 0351fcdc
                        */
        pSVar3 = System_String__Substring(pSVar3,1,length,(MethodInfo *)0x0);
        pSVar3 = HEFOANCOHDC__EOBFJAOLIMH(__this,pSVar3,method_00);
        pSVar4 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK
                           ((NILLKLHKLHG_DIPIFJPCFOE_o *)__this_00,(MethodInfo *)0x0);
        if (OAPELGIBHGF == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OAPELGIBHGF = System_String__Replace(OAPELGIBHGF,pSVar4,pSVar3,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

