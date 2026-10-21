// Nekki.SF2.GUI.SimpleScroll$$JJNHMFIKFBM @ RVA 0x3029D98

void Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t PNALLDHABKO,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  int iVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar5;
  int32_t GAJONDLDKLI_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_Fields UVar11;
  
  method_02 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
  method_00 = (MethodInfo *)(ulong)(uint)PNALLDHABKO;
  if ((DAT_04565cb4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cb4 = 1;
    method_00 = extraout_x1;
  }
  lVar6 = *(long *)&(__this->fields)._snapEase;
  if (lVar6 == 0) goto LAB_03129eb8;
  iVar1 = *(int *)(lVar6 + 0x18);
  UVar10 = (UnityEngine_Vector2_Fields)Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(__this,method_00);
  sVar2 = (short)(__this->fields).POPINJOHFLF;
  if ((sVar2 == 0) || (UVar10 = (UnityEngine_Vector2_Fields)((ulong)UVar10 >> 0x20), sVar2 == 1)) {
    UVar11 = (UnityEngine_Vector2_Fields)Nekki_SF2_GUI_SimpleScroll__GetItemSize(__this,method_01);
    sVar2 = (short)(__this->fields).POPINJOHFLF;
    if ((sVar2 == 0) || (UVar11 = (UnityEngine_Vector2_Fields)((ulong)UVar11 >> 0x20), sVar2 == 1))
    {
      lVar6 = *(long *)&(__this->fields).ANKHPKGAHCA;
      if (lVar6 != 0) {
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = PNALLDHABKO / iVar1;
        }
        fVar8 = (float)(PNALLDHABKO - iVar3 * iVar1);
        fVar7 = UVar11.x + *(float *)(lVar6 + 0x60);
        fVar9 = fVar7 * fVar8;
        if ((__this->fields).super.m_Horizontal != false) {
          fVar9 = -(fVar7 * fVar8);
        }
        fVar9 = UVar10.x + fVar9;
        bVar4 = Util__KEJBDHBDGNI(fVar9,0.1,(MethodInfo *)0x0);
        if (bVar4) {
          return;
        }
        __this_00 = (__this->fields).super.m_Content;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          UVar10 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
          sVar2 = (short)(__this->fields).POPINJOHFLF;
          if ((sVar2 == 0) ||
             (UVar10 = (UnityEngine_Vector2_Fields)((ulong)UVar10 >> 0x20), sVar2 == 1)) {
            Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
                      (__this,fVar9 + UVar10.x,PNEIGGOFIOA,GAJONDLDKLI_00,method_02);
            return;
          }
          goto LAB_03129ebc;
        }
      }
LAB_03129eb8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_03129ebc:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
  System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar5 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar5);
}

