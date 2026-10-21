// KGFBAIBBNNH$$ENBCPBBNFDG @ RVA 0x33A37A4

System_String_o *
KGFBAIBBNNH__ENBCPBBNFDG(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  int32_t value;
  bool bVar1;
  uint16_t value_00;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  int index;
  System_Text_StringBuilder_o *__this;
  short sVar4;
  
  if ((DAT_04567cd3 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
                    /* try { // try from 034a37d8 to 035a37eb has its CatchHandler @ 034a3a40 */
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_22469);
    DAT_04567cd3 = 1;
  }
                    /* try { // try from 034a37f8 to 035a380b has its CatchHandler @ 034a3a30 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IMMNELPBGIF,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch() { ... } // from try @ 034a3854 with catch @ 034a3a50
                       catch() { ... } // from try @ 034a3974 with catch @ 034a3a50 */
    return IMMNELPBGIF;
  }
  if (IMMNELPBGIF != (System_String_o *)0x0) {
                    /* try { // try from 034a380c to 035a3817 has its CatchHandler @ 034a397c */
    bVar1 = System_String__Contains(IMMNELPBGIF,0x5e,(MethodInfo *)0x0);
    if (!bVar1) {
      return IMMNELPBGIF;
    }
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 034a3854 to 035a387b has its CatchHandler @ 034a3a50 */
      pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
      if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
        pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
        if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
          value = (IMMNELPBGIF->fields)._stringLength;
          __this = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
          System_Text_StringBuilder__set_Capacity(pSVar2,value,(MethodInfo *)0x0);
          if (__this != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__set_Capacity(__this,value,(MethodInfo *)0x0);
            if (0 < (IMMNELPBGIF->fields)._stringLength) {
              sVar4 = 0;
              index = 0;
              do {
                    /* try { // try from 034a38b8 to 035a38df has its CatchHandler @ 034a3af0 */
                method_00 = (MethodInfo *)0x0;
                value_00 = System_String__get_Chars(IMMNELPBGIF,index,(MethodInfo *)0x0);
                if (value_00 == 0x5e) {
                  sVar4 = sVar4 + 1;
                }
                if (sVar4 == 2) {
                  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                  pSVar3 = (System_String_o *)
                           (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                                     (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
                  pSVar3 = KGFBAIBBNNH__BIIMJHGLNGO(pSVar3,PFNHAKDMNOF,method_00);
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                    /* try { // try from 034a396c to 035a3973 has its CatchHandler @ 034a3af0 */
                  System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034a3974 to 035a397b has its CatchHandler @ 034a3a50 */
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                    /* catch() { ... } // from try @ 034a380c with catch @ 034a397c
                       try { // try from 034a397c to 035a399b has its CatchHandler @ 034a3748 */
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                  System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
LAB_034a3988:
                  sVar4 = 0;
                }
                else {
                    /* try { // try from 034a38e0 to 035a396b has its CatchHandler @ 034a3748 */
                  if (sVar4 == 1) {
                    if (value_00 != 0x5e) {
                    /* try { // try from 034a399c to 035a399f has its CatchHandler @ 034a3a20 */
                      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                      if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                      System_Text_StringBuilder__Append(pSVar2,value_00,(MethodInfo *)0x0);
                    }
                    sVar4 = 1;
                  }
                  else if (sVar4 == 0) {
                    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
                    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append(pSVar2,value_00,(MethodInfo *)0x0);
                      goto LAB_034a3988;
                    }
                    goto LAB_034a3a60;
                  }
                }
                index = index + 1;
              } while (index < (IMMNELPBGIF->fields)._stringLength);
            }
            if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a39e8 to 035a3a1f has its CatchHandler @ 034a3b90 */
              thunk_FUN_01ba7564();
            }
            pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
            if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Replace
                        (pSVar2,StringLiteral_22469,StringLiteral_47,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a399c with catch @ 034a3a20
                       try { // try from 034a3a20 to 035a3a6b has its CatchHandler @ 034a3748 */
              pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
              if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                    /* catch() { ... } // from try @ 034a37f8 with catch @ 034a3a30 */
                    /* catch() { ... } // from try @ 034a37d8 with catch @ 034a3a40 */
                    /* WARNING: Could not recover jumptable at 0x034a3a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pSVar3 = (System_String_o *)
                         (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
                return pSVar3;
              }
            }
          }
        }
      }
    }
  }
LAB_034a3a60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

