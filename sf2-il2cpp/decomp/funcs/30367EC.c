// MFBNFJGBPBB$$LPLONLCAIGL @ RVA 0x30367EC

System_String_o *
MFBNFJGBPBB__LPLONLCAIGL(System_String_o *DOBODIEOBBL,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  uint index;
  int32_t iVar2;
  uint uVar3;
  int32_t startIndex;
  System_Text_StringBuilder_o *__this;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar4;
  System_String_o *HGPGMCGOOLL;
  System_String_o *b;
  System_String_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  uint16_t local_64 [2];
  
                    /* catch() { ... } // from try @ 03136704 with catch @ 03136810
                       try { // try from 03136810 to 0323683b has its CatchHandler @ 03136048 */
  if ((DAT_04565d47 & 1) == 0) {
                    /* catch() { ... } // from try @ 0313675c with catch @ 03136820 */
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
                    /* try { // try from 0313683c to 03236853 has its CatchHandler @ 031368c0 */
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 03136854 to 032368af has its CatchHandler @ 03136048 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565d47 = 1;
  }
  local_64[0] = 0;
  if (DOBODIEOBBL != (System_String_o *)0x0) {
    index = System_String__IndexOf(DOBODIEOBBL,0x7b,(MethodInfo *)0x0);
    if (-1 < (int)index) {
      __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
                    /* try { // try from 031368b0 to 032368bf has its CatchHandler @ 031368c0 */
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_03136afc;
                    /* catch() { ... } // from try @ 0313683c with catch @ 031368c0
                       catch() { ... } // from try @ 031368b0 with catch @ 031368c0 */
                    /* try { // try from 031368c4 to 032368c7 has its CatchHandler @ 031368d0 */
      System_Text_StringBuilder__Append(__this,DOBODIEOBBL,(MethodInfo *)0x0);
                    /* try { // try from 031368c8 to 032368d3 has its CatchHandler @ 03136048 */
                    /* catch() { ... } // from try @ 03136688 with catch @ 031368d0
                       catch() { ... } // from try @ 031367dc with catch @ 031368d0
                       catch() { ... } // from try @ 031368c4 with catch @ 031368d0 */
      iVar2 = System_String__LastIndexOf(DOBODIEOBBL,0x7d,(MethodInfo *)0x0);
      if (iVar2 != -1) {
        __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)
                    thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
        EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
        __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (LEGDPJHPEOB_o *)0x0) goto LAB_03136afc;
        ppPVar4 = &(__this_01->fields).AAJBIMFNMBB;
        *ppPVar4 = AAJBIMFNMBB;
        thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
        b = StringLiteral_1;
        for (; StringLiteral_1 = b, (int)index <= iVar2; index = index + 1) {
          local_64[0] = System_String__get_Chars(DOBODIEOBBL,index,(MethodInfo *)0x0);
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(char_TypeInfo);
          }
          bVar1 = System_Char__Equals((uint16_t)local_64,0x7b,(MethodInfo *)0x0);
          if (bVar1) {
            uVar3 = System_String__IndexOf(DOBODIEOBBL,0x7d,index,(MethodInfo *)0x0);
            HGPGMCGOOLL = System_String__Substring
                                    (DOBODIEOBBL,index + 1,uVar3 + ~index,(MethodInfo *)0x0);
            method_00 = extraout_x1;
            if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
              method_00 = extraout_x1_00;
            }
            bVar1 = MFBNFJGBPBB__NFBIHKLFODI(HGPGMCGOOLL,method_00);
            index = uVar3;
            if (!bVar1) {
              if (HGPGMCGOOLL == (System_String_o *)0x0) goto LAB_03136afc;
              bVar1 = System_String__Equals
                                (HGPGMCGOOLL,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0
                                );
              if (!bVar1) {
                if (__this_00 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_03136afc;
                EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
                EILGGBOIMGE__KFMNMGGDHFD
                          ((EILGGBOIMGE_o *)__this_01,HGPGMCGOOLL,__this_00,false,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                b = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              }
              bVar1 = System_String__IsNullOrEmpty(HGPGMCGOOLL,(MethodInfo *)0x0);
              if (!bVar1) {
                __this_02 = (System_String_o *)
                            (*(__this->klass->vtable)._3_ToString.methodPtr)
                                      (__this,(__this->klass->vtable)._3_ToString.method);
                if (__this_02 == (System_String_o *)0x0) goto LAB_03136afc;
                startIndex = System_String__IndexOf(__this_02,HGPGMCGOOLL,(MethodInfo *)0x0);
                bVar1 = System_String__op_Inequality(HGPGMCGOOLL,b,(MethodInfo *)0x0);
                if (bVar1) {
                  System_Text_StringBuilder__Replace
                            (__this,HGPGMCGOOLL,b,startIndex,(HGPGMCGOOLL->fields)._stringLength,
                             (MethodInfo *)0x0);
                }
              }
            }
          }
          b = StringLiteral_1;
        }
      }
      DOBODIEOBBL = (System_String_o *)
                    (*(__this->klass->vtable)._3_ToString.methodPtr)
                              (__this,(__this->klass->vtable)._3_ToString.method);
    }
    return DOBODIEOBBL;
  }
LAB_03136afc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

