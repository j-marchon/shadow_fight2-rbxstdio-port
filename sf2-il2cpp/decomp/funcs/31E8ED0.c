// MNLIBPAOCLG$$GIENGNEGHPJ @ RVA 0x31E8ED0

void MNLIBPAOCLG__GIENGNEGHPJ(MNLIBPAOCLG_o *__this,NHBBOEHHEKG_o *LBKOHHHPNIP,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  FCJBEKHDLAF_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  NHBBOEHHEKG_o *pNVar4;
  UnityEngine_Object_o *__this_03;
  NHBBOEHHEKG_o **ppNVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o value_00;
  
                    /* try { // try from 032e8ed4 to 033e8edf has its CatchHandler @ 032e8a38 */
                    /* try { // try from 032e8ee0 to 033e8ee7 has its CatchHandler @ 032e8ee8 */
                    /* catch() { ... } // from try @ 032e8e6c with catch @ 032e8ee8
                       catch() { ... } // from try @ 032e8ecc with catch @ 032e8ee8
                       catch() { ... } // from try @ 032e8ee0 with catch @ 032e8ee8 */
  if ((DAT_04566d7f & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_11209);
    DAT_04566d7f = 1;
  }
  if (LBKOHHHPNIP != (NHBBOEHHEKG_o *)0x0) {
    __this_03 = (UnityEngine_Object_o *)(__this->fields).LDAKOINICNJ;
    value = System_String__Concat
                      (StringLiteral_11209,(LBKOHHHPNIP->fields).KGLJICLJHEL,StringLiteral_1100,
                       (MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_03,value,(MethodInfo *)0x0);
      ppNVar5 = &(__this->fields).CNHHLPPHNCO;
      *ppNVar5 = LBKOHHHPNIP;
      thunk_FUN_01c20e04(ppNVar5,LBKOHHHPNIP);
      (__this->fields).FIGDMPIMECD = 1.0;
      iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (*ppNVar5 != (NHBBOEHHEKG_o *)0x0) {
        (__this->fields).LIPPNBNMMIH = (float)iVar1 / ((*ppNVar5)->fields).DAPHCPICAAC;
        iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(WideScreenController_TypeInfo);
        }
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
                    /* try { // try from 032e8fec to 033e919b has its CatchHandler @ 032e8fec
                       catch() { ... } // from try @ 032e8fec with catch @ 032e8fec
                       catch() { ... } // from try @ 032e928c with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9390 with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9398 with catch @ 032e8fec
                       catch() { ... } // from try @ 032e9448 with catch @ 032e8fec */
        if ((float)iVar2 / (float)iVar3 <= 1.7777778) {
          method_00 = extraout_x1;
          fVar6 = (float)iVar1;
        }
        else {
          iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          method_00 = extraout_x1_00;
          if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(WideScreenController_TypeInfo);
            method_00 = extraout_x1_01;
          }
          fVar6 = (float)iVar2 * 1.7777778;
          if ((float)iVar1 / (float)iVar2 <= 1.7777778) {
            fVar6 = (float)iVar1;
          }
        }
        pNVar4 = (__this->fields).CNHHLPPHNCO;
        fVar6 = fVar6 / (__this->fields).LIPPNBNMMIH;
        (__this->fields).CPMMFFBNDHP = fVar6;
        if (pNVar4 != (NHBBOEHHEKG_o *)0x0) {
          (__this->fields).AOKLLOKEKIK = fVar6 / (pNVar4->fields).NMFKJBOAOLK;
          (__this->fields).GGOLFKNHHFD =
               ((pNVar4->fields).DAPHCPICAAC * 0.5 - (pNVar4->fields).IDBMGJFGIJH) * 0.5;
          MNLIBPAOCLG__ACHNLCNJLHJ(__this,method_00);
          MNLIBPAOCLG__CPIADMPFDEL(__this,method_01);
          MNLIBPAOCLG__DKGKOFLFJJB(__this,method_02);
          __this_00 = (__this->fields).LDAKOINICNJ;
          if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
             __this_01 != (UnityEngine_Transform_o *)0x0)) {
            value_00.fields.z = 1.0;
            value_00.fields.x = 1.0;
            value_00.fields.y = -1.0;
            UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7f == '\0') {
              FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
              DAT_04565b7f = '\x01';
            }
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
            if (__this_02 != (FCJBEKHDLAF_o *)0x0) {
              iVar1 = FCJBEKHDLAF__IHMLDBDLJON(__this_02,(MethodInfo *)0x0);
              fVar6 = 0.5;
              if (iVar1 != 0x11) {
                fVar6 = 1.0;
              }
              fVar7 = 0.5;
              if (iVar1 != 0x11) {
                fVar7 = 0.0;
              }
              (__this->fields).EIKNANMFNBJ = fVar6;
              (__this->fields).BIBDPIEOEHF = fVar7;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

