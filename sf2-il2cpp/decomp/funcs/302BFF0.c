// Nekki.SF2.GUI.SimpleScroll$$ScrollToItem @ RVA 0x302BFF0

void Nekki_SF2_GUI_SimpleScroll__ScrollToItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint PNALLDHABKO;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *IKKAMAMLIKA_00;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar10;
  int32_t GAJONDLDKLI_00;
  Nekki_SF2_GUI_BaseScrollItem_o *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar11;
  uint uVar12;
  UnityEngine_Vector2_Fields UVar13;
  
  method_02 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
  pNVar8 = IKKAMAMLIKA;
  if ((DAT_04565cd6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cd6 = 1;
    pNVar8 = extraout_x1;
  }
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar5 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,(MethodInfo *)pNVar8), bVar5)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    if ((PNEIGGOFIOA <= 0.01) || (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')
       ) {
      if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
        IKKAMAMLIKA_00 =
             Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
        UVar13 = (UnityEngine_Vector2_Fields)
                 Nekki_SF2_GUI_SimpleScroll__JJOCMJBGOKG(__this,IKKAMAMLIKA_00,method_02);
        sVar4 = (short)(__this->fields).POPINJOHFLF;
        if ((sVar4 != 0) &&
           (UVar13 = (UnityEngine_Vector2_Fields)((ulong)UVar13 >> 0x20), sVar4 != 1)) {
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar10 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar10);
        }
        Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
                  (__this,-UVar13.x,PNEIGGOFIOA,GAJONDLDKLI_00,method_02);
        return;
      }
    }
    else {
      pNVar8 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_01);
      if ((((pNVar8 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
           (pUVar9 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
           pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
          (iVar6 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0),
          IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0)) &&
         (pUVar9 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
         pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        iVar7 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0);
        lVar11 = *(long *)&(__this->fields)._snapEase;
        if (lVar11 != 0) {
          iVar3 = *(int *)(lVar11 + 0x18);
          if (DAT_04561c43 == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_04561c43 = '\x01';
          }
          PNALLDHABKO = (iVar7 + -1) - (iVar6 + -1);
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            uVar12 = -PNALLDHABKO;
            if (-1 < (int)PNALLDHABKO) {
              uVar12 = PNALLDHABKO;
            }
            if (DAT_04561c43 == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_04561c43 = '\x01';
            }
          }
          else {
            uVar12 = -PNALLDHABKO;
            if (-1 < (int)PNALLDHABKO) {
              uVar12 = PNALLDHABKO;
            }
          }
          uVar1 = ((iVar7 + -1) - (iVar3 + iVar6)) + 1;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          uVar2 = -uVar1;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          if (uVar2 <= uVar12) {
            PNALLDHABKO = uVar1;
          }
          Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM(__this,PNALLDHABKO,PNEIGGOFIOA,GAJONDLDKLI,method)
          ;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

