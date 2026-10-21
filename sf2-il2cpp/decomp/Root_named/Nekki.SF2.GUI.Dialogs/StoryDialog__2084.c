// TypeDefIndex 2084
// Namespace: Nekki.SF2.GUI.Dialogs
// public class StoryDialog : BaseDialog
// Fields:
//   private const float EHGLNPMFDHO = 120;
//   private const string PGIEMLNDICL = "ShopPieces.Stripe";
//   private const int NEPPEIDPEOE = 1200;
//   private const int FBCKLHHIBLB = 114;
//   private const int MJPGCNDKDFO = 100;
//   private const int KNLJKDPCAMM = 900;
//   private const int FFOPIAFIOIJ = -120;
//   private const int CPCCOHFCGJG = 120;
//   private const int AHIHFLHHJLK = 740;
//   private const int OPBCMANAKJP = 60;
//   private const int NKCCHPAINND = 40;
//   protected const int GPKDPJFMHAL = 103;
//   protected const int NKFDPODOEJJ = 1680;
//   private const int IMDHIIEFMNI = 40;
//   private const int EPCKKEONANI = 1234;
//   private const int GHBLIHPPEHC = 20;
//   protected float OAMNJIMNBAC; // 0xC8
//   protected float NBGPOPHLIFC; // 0xCC
//   protected float BNJJNFFCCCA; // 0xD0
//   protected float MKENJPJCDMO; // 0xD4
//   protected float EMEOGGLKCEB; // 0xD8
//   protected Vector2 CILDLHDCCLG; // 0xDC
//   protected bool ACPDELFFFHF; // 0xE4
//   protected const float FHIFHAIAPHG = 0.9;
//   protected const float AKDJPPLHHLN = 0.8;
//   private const int NEGNKCKENNK = -500;
//   protected const string CEDLOJAOKKJ = "PriceBackground";
//   private const float BOCPOPLEFAJ = 50;
//   public const float FOOTER_TEXT_OFFSET_Y = 60;
//   public const float LINES_PADDING = 32.5;
//   public const float FOOTER_TEXT_DOWN_OFFSET_Y = 30;
//   private const float OGLPJIECIBE = 20;
//   protected int LPEFIPGJDJH; // 0xE8
//   protected LabelAlias _text; // 0xF0
//   protected LabelAlias _timeLabel; // 0xF8
//   protected TimerLabel _timerLabel; // 0x100
//   protected ResolutionImage _portrait; // 0x108
//   protected CompositeImage _compositeImage; // 0x110
//   protected GameObject _textsSprite; // 0x118
//   protected int NOHLNBNJKHD; // 0x120
//   protected int NGPMIOCIHPM; // 0x124
//   protected bool ECIEHGDKKGO; // 0x128
//   protected List<NBLEEDEAPHB> NMBDHGCKNII; // 0x130
//   protected string DHLCIGNKKPP; // 0x138
//   protected IGNEHHMICKB MEELBFGHELO; // 0x140
//   protected bool FKDKFGIFBIJ; // 0x148
//   protected IGFGDDANEPE AAIHPGBKKNM; // 0x150
//   protected AMJMGFCCAKN GEMEHKONBIB; // 0x158
//   protected string BGANBKJCMNM; // 0x160
//   protected LabelButton.MANJLBPDELA IFBFFFFGLDJ; // 0x168
//   protected LabelButton.MANJLBPDELA PAAKEJMBFFH; // 0x16C
//   protected int LBEMKAMMEFG; // 0x170
//   protected bool JJDLGLNKNBB; // 0x174
//   protected long MBLMCOMELHB; // 0x178
//   protected List<NBLEEDEAPHB> OMJHNOCDBEH; // 0x180
//   protected GameObject _footerTextsSprite; // 0x188
//   protected bool NHNBEPIDGIB; // 0x190
//   private Nullable<Vector2> PONEGBOFDBK; // 0x194
//   private List<MGNDHCBAPEN<LabelAlias, LabelAlias>> PKCGAKMEKFG; // 0x1A0
//   private bool JBKOKFGICDL; // 0x1A8
//   protected float JADIONKCDCB; // 0x1AC

// ===== public override void SetTextOffset(Vector2 MJBMLNKAPGC)  [RVA 0x32BE494]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetTextOffset @ RVA 0x32BE494

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetTextOffset
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  (__this->fields).CILDLHDCCLG.fields.x = MJBMLNKAPGC.fields.x;
  (__this->fields).CILDLHDCCLG.fields.y = MJBMLNKAPGC.fields.y;
  return;
}


// ===== protected Transform HJHNCCJBIIP()  [RVA 0x32BE49C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$HJHNCCJBIIP @ RVA 0x32BE49C

UnityEngine_Transform_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_CompositeImage_o *pNVar3;
  
  if ((DAT_045674b9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674b9 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._compositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033be51c;
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._compositeImage;
      if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033be51c;
      goto LAB_033be528;
    }
  }
  __this_01 = (__this->fields)._portrait;
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_033be528:
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    return pUVar2;
  }
LAB_033be51c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetTextPositionXByImage(bool CIEJDOKPHIA)  [RVA 0x32BE538]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetTextPositionXByImage @ RVA 0x32BE538

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetTextPositionXByImage
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,bool CIEJDOKPHIA,MethodInfo *method)

{
  (__this->fields).ACPDELFFFHF = CIEJDOKPHIA;
  return;
}


// ===== public override void SetImageOffsetY(float MJBMLNKAPGC)  [RVA 0x32BE544]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetImageOffsetY @ RVA 0x32BE544

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetImageOffsetY
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  (__this->fields).MKENJPJCDMO = MJBMLNKAPGC;
  return;
}


// ===== protected virtual void DCGKJKKNCEP()  [RVA 0x32BE54C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$DCGKJKKNCEP @ RVA 0x32BE54C

void Nekki_SF2_GUI_Dialogs_StoryDialog__DCGKJKKNCEP
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045674ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674ba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._timeLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields).JJDLGLNKNBB != false)) {
    pSVar2 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                       ((__this->fields).MBLMCOMELHB,true,true,true,true,false,true,
                        StringLiteral_2086/*":"*/,StringLiteral_1/*""*/,true,true,true,true,true,StringLiteral_1/*""*/,
                        StringLiteral_1/*""*/,StringLiteral_1/*""*/,3,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._timeLabel;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields)._timeLabel;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA(__this,(__this->fields)._timeLabel,method_00)
        ;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected virtual void EMNMKABDINP(string CJBJLOPIGFH)  [RVA 0x32BE76C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$EMNMKABDINP @ RVA 0x32BE76C

void Nekki_SF2_GUI_Dialogs_StoryDialog__EMNMKABDINP
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *CJBJLOPIGFH,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_01;
  UnityEngine_Vector3_array *x;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  System_String_o *local_38;
  float local_24;
  
  if ((DAT_045674bb & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    DAT_045674bb = 1;
  }
  local_24 = 0.0;
  local_38 = (System_String_o *)0x0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils__FDEPCEJJGLO(CJBJLOPIGFH,&local_24,&local_38,(MethodInfo *)0x0);
  __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._portrait;
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
      Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_01,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._portrait;
    }
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    *(System_String_o **)&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier = pSVar3;
    thunk_FUN_01c20e04(&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier);
    pNVar4 = (__this->fields)._portrait;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,local_38,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._portrait;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        x = (pNVar4->fields).super.super.m_Corners;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pNVar4 = (__this->fields)._portrait;
          if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar3 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033bea20;
          *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar3;
          thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
          pNVar4 = (__this->fields)._portrait;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033bea20;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,local_38,(MethodInfo *)0x0);
        }
        pNVar4 = (__this->fields)._portrait;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.y = (__this->fields).MKENJPJCDMO;
          value.fields.x = (__this->fields).BNJJNFFCCCA + -500.0;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._portrait;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            if (DAT_0455fb9d == '\0') {
              FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
              DAT_0455fb9d = '\x01';
            }
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__Rotate
                        (pUVar5,(UnityEngine_Vector3_o)
                                (UnityEngine_Vector3_TypeInfo->static_fields->forwardVector).fields,
                         (__this->fields).EMEOGGLKCEB,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._portrait;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
                          (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
                pNVar4 = (__this->fields)._portrait;
                if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                   pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                  value_00.fields.y = (__this->fields).NBGPOPHLIFC * 1.8;
                  value_00.fields.x = value_00.fields.y * local_24;
                  value_00.fields.z = 0.0;
                  UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
                  pNVar4 = (__this->fields)._portrait;
                  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive
                              (__this_00,(__this->fields).FKDKFGIFBIJ,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033bea20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetImageOffsetX(float MJBMLNKAPGC)  [RVA 0x32BEA24]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetImageOffsetX @ RVA 0x32BEA24

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetImageOffsetX
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  (__this->fields).BNJJNFFCCCA = MJBMLNKAPGC;
  return;
}


// ===== protected virtual void IMHIFGGIIMF()  [RVA 0x32BEA2C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$IMHIFGGIIMF @ RVA 0x32BEA2C

void Nekki_SF2_GUI_Dialogs_StoryDialog__IMHIFGGIIMF
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  NBLEEDEAPHB_o *MLANEHFOIPK;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *pSVar11;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar12;
  BHEDGAKGKPO_StaticFields *pBVar13;
  NBLEEDEAPHB_array *pNVar14;
  int index;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector3_o UVar21;
  
  if ((DAT_045674bc & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Clear__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_8312/*"LabelAlias"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674bc = 1;
  }
  pUVar6 = (__this->fields)._textsSprite;
  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_gameObject(pUVar6,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
    pSVar11 = (__this->fields).PKCGAKMEKFG;
    fVar4 = 1680.0;
    if ((__this->fields).FKDKFGIFBIJ != false) {
      fVar4 = 900.0;
    }
    if (pSVar11 != (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
      iVar1 = (pSVar11->fields)._size;
      (pSVar11->fields)._size = 0;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pUVar6 = (__this->fields)._textsSprite;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar7,(MethodInfo *)0x0);
        pSVar12 = (__this->fields).OMJHNOCDBEH;
        if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
          iVar1 = (pSVar12->fields)._size;
          (pSVar12->fields)._size = 0;
          (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0
                               );
          }
          pSVar12 = (__this->fields).NMBDHGCKNII;
          if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
            index = 0;
            fVar16 = 0.0;
            fVar18 = 0.0;
            do {
              if ((pSVar12->fields)._size <= index) {
                pUVar6 = (__this->fields)._textsSprite;
                if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar10 = (UnityEngine_RectTransform_o *)
                              UnityEngine_GameObject__GetComponent<object>
                                        (pUVar6,
                                         Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                        ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                  value_00.fields.y = fVar16;
                  value_00.fields.x = fVar4;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar10,value_00,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._textsSprite;
                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar7,fVar18 * -0.5 + -20.0,(MethodInfo *)0x0);
                    pSVar12 = (__this->fields).OMJHNOCDBEH;
                    if (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                      if ((pSVar12->fields)._size < 1) {
                    /* try { // try from 033bf140 to 034bf143 has its CatchHandler @ 033bf158 */
                    /* try { // try from 033bf144 to 034bf147 has its CatchHandler @ 033bf154 */
                    /* try { // try from 033bf148 to 034bf14b has its CatchHandler @ 033bf150 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf054 with catch @ 033bf14c
                       try { // try from 033bf14c to 034bf173 has its CatchHandler @ 033bec24 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf148 with catch @ 033bf150
                        */
                        return;
                      }
                    /* WARNING: Could not recover jumptable at 0x033bf120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(__this->klass->vtable)._48_HCCGKDLAFOJ.methodPtr)
                                (__this,(__this->klass->vtable)._48_HCCGKDLAFOJ.method);
                      return;
                    }
                  }
                }
                break;
              }
              MLANEHFOIPK = (NBLEEDEAPHB_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar12,index,
                                       Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__
                                      );
              lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
              if (MLANEHFOIPK == (NBLEEDEAPHB_o *)0x0) break;
              if ((MLANEHFOIPK->fields).EHKKBKHGDHE == false) {
                iVar2 = (MLANEHFOIPK->fields).KFHPFEKBDFM;
                if (iVar2 == 1) {
                  pSVar12 = (__this->fields).OMJHNOCDBEH;
                  if (pSVar12 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) break;
                  pNVar14 = (pSVar12->fields)._items;
                  (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                  if (pNVar14 == (NBLEEDEAPHB_array *)0x0) break;
                  uVar3 = (pSVar12->fields)._size;
                  if (uVar3 < (uint)pNVar14->max_length) {
                    (pSVar12->fields)._size = uVar3 + 1;
                    pNVar14->m_Items[(int)uVar3] = MLANEHFOIPK;
                    thunk_FUN_01c20e04(pNVar14->m_Items + (int)uVar3,MLANEHFOIPK);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar12,
                               (Il2CppObject *)MLANEHFOIPK,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                }
                else if (iVar2 == 0) {
                  pUVar6 = (UnityEngine_GameObject_o *)
                           thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                  UnityEngine_GameObject___ctor(pUVar6,StringLiteral_8312/*"LabelAlias"*/,(MethodInfo *)0x0);
                  if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                     (pNVar8 = (Nekki_SF2_GUI_LabelAlias_o *)
                               UnityEngine_GameObject__AddComponent<object>
                                         (pUVar6,
                                          Method_UnityEngine_GameObject_AddComponent<LabelAlias>__),
                     pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) break;
                  iVar1 = (MLANEHFOIPK->fields).ALFDOLMJLKI;
                  if (iVar1 < 1) {
                    iVar1 = 0x67;
                  }
                  Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar8,iVar1,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(pNVar8,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(pNVar8,0.7,(MethodInfo *)0x0);
                  (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                            ((ulong)(uint)(MLANEHFOIPK->fields).ONNNBMCAJMN.fields.r,
                             (ulong)(uint)(MLANEHFOIPK->fields).ONNNBMCAJMN.fields.g,
                             (MLANEHFOIPK->fields).ONNNBMCAJMN.fields.b,
                             (MLANEHFOIPK->fields).ONNNBMCAJMN.fields.a,pNVar8,
                             (pNVar8->klass->vtable)._23_set_color.method);
                  UnityEngine_UI_Text__set_alignment
                            ((UnityEngine_UI_Text_o *)pNVar8,3,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_alignByGeometry
                            ((UnityEngine_UI_Text_o *)pNVar8,true,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_verticalOverflow
                            ((UnityEngine_UI_Text_o *)pNVar8,1,(MethodInfo *)0x0);
                  pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                      ((UnityEngine_UI_Graphic_o *)pNVar8,(MethodInfo *)0x0);
                  if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) break;
                  value.fields.y = 10.0;
                  value.fields.x = fVar4;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar10,value,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_LabelAlias__set_Alias
                            (pNVar8,(MLANEHFOIPK->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._textsSprite;
                  if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                     (pUVar9 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                     pUVar7 == (UnityEngine_Transform_o *)0x0)) break;
                  UnityEngine_Transform__SetParent(pUVar7,pUVar9,false,(MethodInfo *)0x0);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                  fVar18 = fVar18 - (fVar15 * 0.5 + (float)(MLANEHFOIPK->fields).OJDCNGCCOBA);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar7,fVar18,(MethodInfo *)0x0);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                  if ((__this->fields).ACPDELFFFHF == false) {
                    fVar15 = (float)(MLANEHFOIPK->fields).ILAJANAMHDM;
                  }
                  else {
                    pUVar9 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
                    if (pUVar9 == (UnityEngine_Transform_o *)0x0) break;
                    UVar21 = UnityEngine_Transform__get_localPosition(pUVar9,(MethodInfo *)0x0);
                    fVar19 = (__this->fields).NBGPOPHLIFC;
                    fVar15 = (__this->fields).BNJJNFFCCCA;
                    fVar17 = (__this->fields).OAMNJIMNBAC;
                    pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)pNVar8,(MethodInfo *)0x0);
                    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) break;
                    UVar20 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
                    fVar15 = (UVar21.fields.x - fVar15) + 40.0 + fVar17 * 0.9 * fVar19 * 0.5 +
                             UVar20.fields.m_Width * 0.5 + (float)(MLANEHFOIPK->fields).ILAJANAMHDM;
                  }
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar7,fVar15,(MethodInfo *)0x0);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                    /* try { // try from 033bf028 to 034bf02f has its CatchHandler @ 033bf15c */
                  fVar18 = fVar18 - (fVar15 * 0.5 + 32.5);
                  fVar15 = (float)(*(pNVar8->klass->vtable)._82_get_preferredHeight.methodPtr)
                                            (pNVar8,(pNVar8->klass->vtable)._82_get_preferredHeight.
                                                    method);
                  fVar16 = fVar16 + fVar15 + 32.5;
                  if ((MLANEHFOIPK->fields).KOLIPNBCKOB != (LBMOOFGGPEB_o *)0x0) {
                    /* try { // try from 033bf054 to 034bf05b has its CatchHandler @ 033bf14c */
                    pUVar6 = (__this->fields)._textsSprite;
                    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) break;
                    /* try { // try from 033bf05c to 034bf13f has its CatchHandler @ 033bec24 */
                    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
                              (__this,pNVar8,MLANEHFOIPK,pUVar7,in_x4);
                  }
                }
              }
              else {
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                    /* try { // try from 033bec24 to 034bf027 has its CatchHandler @ 033bec24
                       catch() { ... } // from try @ 033bec24 with catch @ 033bec24
                       catch() { ... } // from try @ 033bf05c with catch @ 033bec24
                       catch() { ... } // from try @ 033bf14c with catch @ 033bec24
                       catch() { ... } // from try @ 033bf178 with catch @ 033bec24
                       catch() { ... } // from try @ 033bf1b8 with catch @ 033bec24 */
                Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                          (pNVar8,StringLiteral_1/*""*/,(pNVar8->klass->vtable)._75_set_text.method);
                pNVar8 = (__this->fields)._timeLabel;
                if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pBVar13 = BHEDGAKGKPO_TypeInfo->static_fields;
                (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                          ((ulong)(uint)(pBVar13->KPJHDEIJPAN).fields.r,
                           (ulong)(uint)(pBVar13->KPJHDEIJPAN).fields.g,
                           (pBVar13->KPJHDEIJPAN).fields.b,(pBVar13->KPJHDEIJPAN).fields.a,pNVar8,
                           (pNVar8->klass->vtable)._23_set_color.method);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar8,0x67,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if ((pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                   pUVar6 == (UnityEngine_GameObject_o *)0x0)) break;
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                UnityEngine_UI_Text__set_alignment
                          ((UnityEngine_UI_Text_o *)pNVar8,3,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                pUVar6 = (__this->fields)._textsSprite;
                if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar9 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
                   pUVar7 == (UnityEngine_Transform_o *)0x0)) break;
                UnityEngine_Transform__SetParent(pUVar7,pUVar9,false,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._timeLabel;
                if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) break;
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY
                          (pUVar7,fVar18 + -20.0,(MethodInfo *)0x0);
                fVar18 = fVar18 + -20.0 + -52.5;
                fVar16 = fVar16 + 40.0;
                (*(__this->klass->vtable)._49_EGEMNGPLOKE.methodPtr)
                          (__this,MLANEHFOIPK,(__this->klass->vtable)._49_EGEMNGPLOKE.method);
              }
              pSVar12 = (__this->fields).NMBDHGCKNII;
              index = index + 1;
            } while (pSVar12 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf144 with catch @ 033bf154
                        */
  FUN_01bab8c8();
}


// ===== public override void SetImageScale(float JKOJPEKLBCI)  [RVA 0x32BF3E0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetImageScale @ RVA 0x32BF3E0

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetImageScale
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,float JKOJPEKLBCI,MethodInfo *method)

{
  (__this->fields).NBGPOPHLIFC = JKOJPEKLBCI;
  return;
}


// ===== private void Update()  [RVA 0x32BF3E8]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$Update @ RVA 0x32BF3E8

void Nekki_SF2_GUI_Dialogs_StoryDialog__Update
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  if ((__this->fields).JBKOKFGICDL != false) {
    (__this->fields).JBKOKFGICDL = false;
    Nekki_SF2_GUI_Dialogs_StoryDialog__DCEECKIGLFE(__this,method);
    return;
  }
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x32BF7D0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$LCGFJKFJKJK @ RVA 0x32BF7D0

void Nekki_SF2_GUI_Dialogs_StoryDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar4;
  Il2CppObject *pIVar5;
  int32_t index;
  Il2CppClass *pIVar6;
  
  if ((DAT_045674bd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__,DNBBBGEENMM);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674bd = 1;
  }
  if ((__this->fields).NHNBEPIDGIB == false) {
    pSVar4 = (__this->fields).NMBDHGCKNII;
    if (pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_033bf94c;
    index = (__this->fields).NOHLNBNJKHD;
  }
  else {
    pSVar4 = (__this->fields).NMBDHGCKNII;
    if (pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_033bf94c;
    index = (pSVar4->fields)._size + -1;
    (__this->fields).NOHLNBNJKHD = index;
  }
  if (index + 1 < (pSVar4->fields)._size) {
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,index,
                        Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033bf94c;
    (*(__this->klass->vtable)._47_AOHAKEEHGKG.methodPtr)
              (__this,pIVar5[2].klass,(__this->klass->vtable)._47_AOHAKEEHGKG.method);
  }
  pSVar4 = (__this->fields).NMBDHGCKNII;
  if (pSVar4 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar2 = (pSVar4->fields)._size;
    if ((__this->fields).NOHLNBNJKHD + 1 == iVar2) {
      bVar3 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar4 = (__this->fields).NMBDHGCKNII;
        if ((pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,
                                (__this->fields).NOHLNBNJKHD,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
           pIVar5 == (Il2CppObject *)0x0)) goto LAB_033bf94c;
        pIVar5 = pIVar5 + 2;
      }
      else {
        pIVar5 = (Il2CppObject *)&(__this->fields).BGANBKJCMNM;
      }
      pIVar6 = pIVar5->klass;
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      lVar1 = 0x80;
      if (!bVar3) {
        lVar1 = 0x160;
      }
      pIVar6 = *(Il2CppClass **)((long)&__this->klass + lVar1);
    }
    (__this->fields).super.NIEHEOKFPAN = (System_String_o *)pIVar6;
    thunk_FUN_01c20e04();
                    /* WARNING: Could not recover jumptable at 0x033bf948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._44_EGHBJLDNOMA.methodPtr)
              (__this,(__this->klass->vtable)._44_EGHBJLDNOMA.method);
    return;
  }
LAB_033bf94c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual TimerLabel DBNAPIBFLEB(NBLEEDEAPHB FDLJCNLNCOC)  [RVA 0x32BF950]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$DBNAPIBFLEB @ RVA 0x32BF950

Nekki_SF2_GUI_TimerLabel_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__DBNAPIBFLEB
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,MethodInfo *method
          )

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_TimerLabel_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  LBMOOFGGPEB_o *pLVar2;
  System_String_StaticFields *pSVar3;
  undefined4 uVar4;
  
  if ((DAT_045674be & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TimerLabel>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13819/*"TimerLabel"*/);
    DAT_045674be = 1;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_13819/*"TimerLabel"*/,(MethodInfo *)0x0);
  if ((((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_01 = (Nekki_SF2_GUI_TimerLabel_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_AddComponent<TimerLabel>__),
       FDLJCNLNCOC != (NBLEEDEAPHB_o *)0x0)) &&
      (pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB, pLVar2 != (LBMOOFGGPEB_o *)0x0)) &&
     (__this_01 != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) {
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 1) = (pLVar2->fields).DGGBINHAFDB;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 2) = (pLVar2->fields).JAPGAIELCNJ;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 3) = (pLVar2->fields).CNLFJDCAIFD;
    *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 4) = (pLVar2->fields).BKNLGDOJJHP;
    *(System_String_o **)&(__this_01->fields).UseDaysDelimiter = (pLVar2->fields).MLNKOENNJDF;
    thunk_FUN_01c20e04(&(__this_01->fields).UseDaysDelimiter);
    pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
    if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
      (__this_01->fields).Delimiter = (pLVar2->fields).MOGICNLLBEM;
      thunk_FUN_01c20e04(&(__this_01->fields).Delimiter);
      pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
        (__this_01->fields).super.field_0x1e1 = (pLVar2->fields).LNOCGDONOKL;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 5) =
             (pLVar2->fields).EOGMODIBAAI;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 6) =
             (pLVar2->fields).EGKABALFMPP;
        *(bool_conflict *)((long)&(__this_01->fields).super._Alias + 7) =
             (pLVar2->fields).AHKJNOGHCCK;
        (__this_01->fields).super._ToUpperCase = (pLVar2->fields).BAGAHOJOINM;
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                  ((Nekki_SF2_GUI_LabelAlias_o *)__this_01,0x67,(MethodInfo *)0x0);
        pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
        if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                    ((pLVar2->fields).BANIDGFENDE.fields.r,(pLVar2->fields).BANIDGFENDE.fields.g,
                     (pLVar2->fields).BANIDGFENDE.fields.b,(pLVar2->fields).BANIDGFENDE.fields.a,
                     __this_01,(__this_01->klass->vtable)._23_set_color.method);
          pLVar2 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
          if (pLVar2 != (LBMOOFGGPEB_o *)0x0) {
            bVar1 = (pLVar2->fields).BKNLGDOJJHP;
            (__this_01->fields).IsMinutes = true;
            uVar4 = 3;
            if (bVar1 != false) {
              uVar4 = 4;
            }
            *(undefined4 *)&(__this_01->fields).super.field_0x1e4 = uVar4;
            if (bVar1 == false) {
              pSVar3 = string_TypeInfo->static_fields;
            }
            else {
              pSVar3 = (System_String_StaticFields *)&StringLiteral_13795/*"TimeDaysShort"*/;
            }
            Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this_01,pSVar3->Empty,(MethodInfo *)0x0)
            ;
            UnityEngine_UI_Text__set_alignment
                      ((UnityEngine_UI_Text_o *)__this_01,3,(MethodInfo *)0x0);
            __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_sizeDelta
                        (__this_02,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_verticalOverflow
                        ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_horizontalOverflow
                        ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void FGBCBEAPMCH(object IMMNELPBGIF)  [RVA 0x32BFB6C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$FGBCBEAPMCH @ RVA 0x32BFB6C

void Nekki_SF2_GUI_Dialogs_StoryDialog__FGBCBEAPMCH
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== private void DCEECKIGLFE()  [RVA 0x32BF3FC]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$DCEECKIGLFE @ RVA 0x32BF3FC

void Nekki_SF2_GUI_Dialogs_StoryDialog__DCEECKIGLFE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Action_LBMOOFGGPEB__o **ppSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_04;
  System_Action_LBMOOFGGPEB__o *action;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_045674bf & 1) == 0) {
    FUN_01bab630(&System_Action<LBMOOFGGPEB>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_get_Current__
                );
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_LKDOJNIJLBE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo);
    DAT_045674bf = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PKCGAKMEKFG;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
              );
    local_a0.fields._list =
         (System_Collections_Generic_List_T__o *)
         CONCAT44(local_b8.fields._list._4_4_,(int32_t)local_b8.fields._list);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._current = local_b8.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                        );
      pIVar1 = local_a0.fields._current;
      if (!bVar2) break;
      if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_a0.fields._current[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<Bounds>
                        (*(System_Collections_Generic_List_T__o **)
                          ((long)local_a0.fields._current[1].monitor + 0x150),
                         Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
      if (!bVar2) {
        if (pIVar1[1].monitor == (Nekki_SF2_GUI_TextPic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar6 = Nekki_SF2_GUI_TextPic__LocalAlignedTextMeshLastLineBounds_Anchored
                          (pIVar1[1].monitor,8,(MethodInfo *)0x0);
        __this_01 = pIVar1[1].klass;
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar5 = *(float *)&(__this_01->_2).nested_type_count;
        __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
        if (pIVar1[1].monitor == (UnityEngine_UI_Graphic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = UnityEngine_UI_Graphic__get_rectTransform(pIVar1[1].monitor,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar7 = UnityEngine_Transform__get_localPosition
                          ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        value.fields.z = UVar6.fields.z + UVar7.fields.z;
        value.fields.y = UVar6.fields.y + (fVar5 + fVar5) * 0.5 + UVar7.fields.y;
        value.fields.x = UVar6.fields.x + 20.0 + UVar7.fields.x;
        UnityEngine_Transform__set_localPosition
                  ((UnityEngine_Transform_o *)__this_02,value,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
              );
    __this_04 = (__this->fields).super.DIKHJEINHID;
    if (__this_04 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
      method_00 = extraout_x1;
      if (0 < (__this_04->fields)._size) {
        if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
        if (action == (System_Action_LBMOOFGGPEB__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_LBMOOFGGPEB__o *)
                   thunk_FUN_01bda818(System_Action<LBMOOFGGPEB>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar3 = &Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
          *ppSVar3 = action;
          thunk_FUN_01c20e04(ppSVar3,action);
        }
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_04,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
        (*(__this->klass->vtable)._41_FCHNOIGHEEO.methodPtr)
                  (__this,(__this->klass->vtable)._41_FCHNOIGHEEO.method);
        method_00 = extraout_x1_00;
      }
      if ((__this->fields).JJDLGLNKNBB != false) {
        if ((__this->fields).MBLMCOMELHB < 1) {
          local_b8.fields._list._0_4_ = (__this->fields).LBEMKAMMEFG;
          uVar4 = thunk_FUN_01bda448(int_TypeInfo,&local_b8);
          (*(__this->klass->vtable)._13_OnClose.methodPtr)
                    (__this,uVar4,(__this->klass->vtable)._13_OnClose.method);
          method_00 = extraout_x1_01;
        }
        Nekki_SF2_GUI_Dialogs_StoryDialog__GDIKHBMNJPH(__this,method_00);
        (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                  (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x32BFC18]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$GLJGIJNALCA @ RVA 0x32BFC18

void Nekki_SF2_GUI_Dialogs_StoryDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *a;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Object_o *x;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_045674c0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674c0 = 1;
  }
  pNVar3 = (__this->fields)._text;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    a = (System_String_o *)
        (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                  (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
    bVar2 = System_String__op_Inequality(a,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar3 = (__this->fields)._text;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
      UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar6 = UVar8.fields.y + 0.0;
    }
    else {
      x = (UnityEngine_Object_o *)(__this->fields)._textsSprite;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar6 = 0.0;
      if (bVar2) {
        pUVar5 = (__this->fields)._textsSprite;
        if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar6 = UVar9.fields.m_Height + 0.0;
      }
    }
    pUVar5 = (__this->fields)._footerTextsSprite;
    fVar7 = (__this->fields).OAMNJIMNBAC * 0.9 * 0.8;
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar5 = (__this->fields)._footerTextsSprite;
        if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033bfdf0;
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar6 = fVar6 + UVar9.fields.m_Height + 32.5;
      }
      pUVar5 = (__this->fields).super._content;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
        pUVar5 = (__this->fields).super._content;
        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_00 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar5,
                                   Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            fVar7 = (__this->fields).JADIONKCDCB;
            bVar2 = false;
            bVar1 = false;
            if (fVar6 <= fVar7) {
              bVar2 = false;
              bVar1 = true;
              if (!NAN(fVar7)) {
                bVar2 = fVar7 == 0.0;
                bVar1 = 0.0 <= fVar7;
              }
            }
            if (bVar1 && !bVar2) {
              fVar6 = fVar7;
            }
            UVar8.fields.y = fVar6;
            UVar8.fields.x = UVar9.fields.m_Width;
            UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_033bfdf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void ACICKHKFILK(LabelButton LGHOMHOPNEP, BaseDialog.OFBBBIDKKOD JFLAKNAGBEL)  [RVA 0x32BFDF4]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$ACICKHKFILK @ RVA 0x32BFDF4

void Nekki_SF2_GUI_Dialogs_StoryDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t JFLAKNAGBEL,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Action_object__o *pSVar1;
  System_String_o **ppSVar2;
  System_String_o *CJNHFNHJHPE;
  int32_t CJNHFNHJHPE_00;
  int32_t iVar3;
  
  if ((DAT_045674c1 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674c1 = 1;
  }
  if ((LGHOMHOPNEP != (LabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    CJNHFNHJHPE_00 = 1;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    if (JFLAKNAGBEL == 1) {
      CJNHFNHJHPE_00 = (__this->fields).PAAKEJMBFFH;
      ppSVar2 = &(__this->fields).super.NIEHEOKFPAN;
      iVar3 = 1;
    }
    else if (JFLAKNAGBEL == 2) {
      CJNHFNHJHPE_00 = (__this->fields).IFBFFFFGLDJ;
      iVar3 = 0;
      ppSVar2 = &(__this->fields).super.LLBBHINDIDB;
    }
    else {
      ppSVar2 = (System_String_o **)&StringLiteral_1/*""*/;
      iVar3 = 0;
    }
    CJNHFNHJHPE = *ppSVar2;
    LabelButton__set_ButtonColor(LGHOMHOPNEP,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    LabelButton__set_Alias(LGHOMHOPNEP,CJNHFNHJHPE,(MethodInfo *)0x0);
    (LGHOMHOPNEP->fields).super.super.ButtonId = iVar3;
    pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    if (__this != (Nekki_SF2_GUI_Dialogs_StoryDialog_o *)0x0) {
      System_Action<object>___ctor();
      SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar1,(MethodInfo *)0x0);
      pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x32BFF4C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$Init @ RVA 0x32BFF4C

void Nekki_SF2_GUI_Dialogs_StoryDialog__Init
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  System_Action_o *CJNHFNHJHPE;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *pSVar2;
  System_String_o *GKLEODLEPMA;
  System_String_o **ppSVar3;
  
  if ((DAT_045674c2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&KNJPDILMPDG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Clear__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674c2 = 1;
  }
  pSVar2 = (__this->fields).PKCGAKMEKFG;
  if (pSVar2 == (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  GKLEODLEPMA = StringLiteral_1/*""*/;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (KNJPDILMPDG_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)KNJPDILMPDG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    GKLEODLEPMA = IMMNELPBGIF[1].monitor;
    (__this->fields).DHLCIGNKKPP = (System_String_o *)IMMNELPBGIF[1].klass;
    thunk_FUN_01c20e04(&(__this->fields).DHLCIGNKKPP);
    (__this->fields).FKDKFGIFBIJ = *(bool_conflict *)((long)&IMMNELPBGIF[5].monitor + 1);
    (__this->fields).NMBDHGCKNII =
         (System_Collections_Generic_List_NBLEEDEAPHB__o *)IMMNELPBGIF[2].klass;
    thunk_FUN_01c20e04(&(__this->fields).NMBDHGCKNII);
    (__this->fields).MEELBFGHELO = IMMNELPBGIF[2].monitor;
    thunk_FUN_01c20e04(&(__this->fields).MEELBFGHELO);
    (__this->fields).ECIEHGDKKGO = *(bool_conflict *)&IMMNELPBGIF[5].monitor;
    (__this->fields).BGANBKJCMNM = IMMNELPBGIF[3].monitor;
    thunk_FUN_01c20e04(&(__this->fields).BGANBKJCMNM);
    (__this->fields).PAAKEJMBFFH = *(int32_t *)&IMMNELPBGIF[4].monitor;
    ppSVar3 = &(__this->fields).super.LLBBHINDIDB;
    *ppSVar3 = (System_String_o *)IMMNELPBGIF[4].klass;
    thunk_FUN_01c20e04(ppSVar3);
    (__this->fields).IFBFFFFGLDJ = *(int32_t *)((long)&IMMNELPBGIF[4].monitor + 4);
    (__this->fields).NHNBEPIDGIB = *(bool_conflict *)((long)&IMMNELPBGIF[5].monitor + 2);
    (__this->fields).JADIONKCDCB = *(float *)((long)&IMMNELPBGIF[5].klass + 4);
    if (IMMNELPBGIF[3].klass != (Il2CppClass *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                 (System_Action_T__o *)IMMNELPBGIF[3].klass,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,(__this->fields).BGANBKJCMNM,
             (__this->fields).super.LLBBHINDIDB,0,(MethodInfo *)0x0);
  return;
}


// ===== protected override void Start()  [RVA 0x32C0154]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$Start @ RVA 0x32C0154

void Nekki_SF2_GUI_Dialogs_StoryDialog__Start
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  
  if ((DAT_045674c3 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_JHAKFKFPJJB__);
    DAT_045674c3 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__Start
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
            (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
  pIVar1 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar1,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar1 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar1,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private TimerLabel HALPHJGHPIP(LabelAlias FNPBJDFHPDJ, NBLEEDEAPHB MLANEHFOIPK, Transform ELOCKFLGKNO)  [RVA 0x32BF158]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$HALPHJGHPIP @ RVA 0x32BF158

Nekki_SF2_GUI_TimerLabel_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Nekki_SF2_GUI_LabelAlias_o *FNPBJDFHPDJ,
          NBLEEDEAPHB_o *MLANEHFOIPK,UnityEngine_Transform_o *ELOCKFLGKNO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool value;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  Nekki_SF2_GUI_TimerLabel_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MGNDHCBAPEN_LabelAlias__LabelAlias__o *__this_03;
  LBMOOFGGPEB_o *pLVar4;
  LBMOOFGGPEB_array *pLVar5;
  MGNDHCBAPEN_LabelAlias__LabelAlias__array *pMVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_04;
  UnityEngine_Vector3_o value_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf140 with catch @ 033bf158
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf028 with catch @ 033bf15c
                        */
                    /* try { // try from 033bf174 to 034bf177 has its CatchHandler @ 033bf1a0 */
                    /* try { // try from 033bf178 to 034bf1af has its CatchHandler @ 033bec24 */
  if ((DAT_045674c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Add__)
    ;
                    /* catch() { ... } // from try @ 033bf174 with catch @ 033bf1a0 */
    FUN_01bab630(&Method_MGNDHCBAPEN<LabelAlias,_LabelAlias>__ctor__);
                    /* try { // try from 033bf1b0 to 034bf1b7 has its CatchHandler @ 033bf1cc */
    FUN_01bab630(&MGNDHCBAPEN<LabelAlias,_LabelAlias>_TypeInfo);
                    /* try { // try from 033bf1b8 to 034bf1c3 has its CatchHandler @ 033bec24 */
    DAT_045674c4 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__;
                    /* try { // try from 033bf1c4 to 034bf1cb has its CatchHandler @ 033bf1cc */
  if ((MLANEHFOIPK != (NBLEEDEAPHB_o *)0x0) &&
     (__this_00 = (__this->fields).super.DIKHJEINHID,
     __this_00 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033bf1b0 with catch @ 033bf1cc
                       catch(type#2 @ 00000000) { ... } // from try @ 033bf1c4 with catch @ 033bf1cc
                        */
    pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
    pLVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pLVar5 != (LBMOOFGGPEB_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pLVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pLVar5->m_Items[(int)uVar1] = pLVar4;
        thunk_FUN_01c20e04(pLVar5->m_Items + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pLVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      CJNHFNHJHPE = (Nekki_SF2_GUI_TimerLabel_o *)
                    (*(__this->klass->vtable)._37_DBNAPIBFLEB.methodPtr)
                              (__this,MLANEHFOIPK,(__this->klass->vtable)._37_DBNAPIBFLEB.method);
      pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
      if (pLVar4 != (LBMOOFGGPEB_o *)0x0) {
        LBMOOFGGPEB__JBGIAEJIKCA(pLVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
        if ((((pLVar4 != (LBMOOFGGPEB_o *)0x0) &&
             (LBMOOFGGPEB__LLCONNGHGKD(pLVar4,(MethodInfo *)0x0),
             CJNHFNHJHPE != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) &&
            (pUVar3 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
            pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
           (UnityEngine_Transform__SetParent(pUVar3,ELOCKFLGKNO,false,(MethodInfo *)0x0),
           FNPBJDFHPDJ != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
          value = UnityEngine_UI_Text__get_alignByGeometry
                            ((UnityEngine_UI_Text_o *)FNPBJDFHPDJ,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignByGeometry
                    ((UnityEngine_UI_Text_o *)CJNHFNHJHPE,value,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing
                    ((Nekki_SF2_GUI_LabelAlias_o *)CJNHFNHJHPE,
                     (FNPBJDFHPDJ->fields)._useLabelFontSize,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing
                    ((Nekki_SF2_GUI_LabelAlias_o *)CJNHFNHJHPE,
                     (float)(FNPBJDFHPDJ->fields)._labelFontSize,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)FNPBJDFHPDJ,(MethodInfo *)0x0);
          if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
             (value_00 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_localPosition(pUVar3,value_00,(MethodInfo *)0x0);
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
              __this_04 = (__this->fields).PKCGAKMEKFG;
              __this_03 = (MGNDHCBAPEN_LabelAlias__LabelAlias__o *)
                          thunk_FUN_01bda818(MGNDHCBAPEN<LabelAlias,_LabelAlias>_TypeInfo);
              MGNDHCBAPEN<object,_object>___ctor
                        ((MGNDHCBAPEN_T1__T2__o *)__this_03,(Il2CppObject *)CJNHFNHJHPE,
                         (Il2CppObject *)FNPBJDFHPDJ,
                         Method_MGNDHCBAPEN<LabelAlias,_LabelAlias>__ctor__);
              lVar2 = 
              Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Add__;
              if (__this_04 !=
                  (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
                pMVar6 = (__this_04->fields)._items;
                (__this_04->fields)._version = (__this_04->fields)._version + 1;
                if (pMVar6 != (MGNDHCBAPEN_LabelAlias__LabelAlias__array *)0x0) {
                  uVar1 = (__this_04->fields)._size;
                  if (uVar1 < (uint)pMVar6->max_length) {
                    (__this_04->fields)._size = uVar1 + 1;
                    pMVar6->m_Items[(int)uVar1] = __this_03;
                    thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,__this_03);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_04,
                               (Il2CppObject *)__this_03,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).JBKOKFGICDL = true;
                  return CJNHFNHJHPE;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void IMGPKHODFAN(Color LNHGGJMDJBJ)  [RVA 0x32C0260]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$IMGPKHODFAN @ RVA 0x32C0260

void Nekki_SF2_GUI_Dialogs_StoryDialog__IMGPKHODFAN
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,UnityEngine_Color_o LNHGGJMDJBJ,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_o value;
  
  pNVar2 = (__this->fields)._text;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._text;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,0x67,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._text;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                    (CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._0_8_ >> 0x20),LNHGGJMDJBJ.fields.r),
                     CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._4_8_ >> 0x20),LNHGGJMDJBJ.fields.g),
                     CONCAT44((int)((ulong)LNHGGJMDJBJ.fields._8_8_ >> 0x20),LNHGGJMDJBJ.fields.b),
                     CONCAT44((int)((ulong)register0x00005060 >> 0x20),LNHGGJMDJBJ.fields.a),pNVar2,
                     (pNVar2->klass->vtable)._23_set_color.method);
          pNVar2 = (__this->fields)._text;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)pNVar2,3,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._text;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              transform = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionY(transform,0.0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._text;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                      ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._text;
                if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  bVar1 = (__this->fields).FKDKFGIFBIJ;
                  __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar4 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
                    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                      fVar3 = 1680.0;
                      if (bVar1 != false) {
                        fVar3 = 900.0;
                      }
                      value.fields.y = UVar4.fields.m_Height;
                      value.fields.x = fVar3;
                      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void IFHIOMOEIPE()  [RVA 0x32C0398]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$IFHIOMOEIPE @ RVA 0x32C0398

void Nekki_SF2_GUI_Dialogs_StoryDialog__IFHIOMOEIPE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_01;
  Il2CppObject *pIVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  
  if ((DAT_045674c5 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_045674c5 = 1;
  }
  pNVar1 = (__this->fields)._timeLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._timeLabel;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar4->KPJHDEIJPAN).fields.r,(pBVar4->KPJHDEIJPAN).fields.g,
                 (pBVar4->KPJHDEIJPAN).fields.b,(pBVar4->KPJHDEIJPAN).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._timeLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x67,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._timeLabel;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._timeLabel;
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            __this_00 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).super._content;
            if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
               (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._timeLabel;
              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                UnityEngine_UI_Text__set_alignment
                          ((UnityEngine_UI_Text_o *)pNVar1,3,(MethodInfo *)0x0);
                __this_01 = (__this->fields).NMBDHGCKNII;
                if (__this_01 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                  if (0 < (__this_01->fields)._size) {
                    pIVar3 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_01,0,
                                        Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__
                                       );
                    /* WARNING: Could not recover jumptable at 0x033c04fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                              (__this,pIVar3,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
                    return;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x32C0510]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$OnDestroy @ RVA 0x32C0510

void Nekki_SF2_GUI_Dialogs_StoryDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_045674c6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045674c6 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_StoryDialog_o *)0x0) {
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GBPDDFOIDPG()  [RVA 0x32C05B0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$GBPDDFOIDPG @ RVA 0x32C05B0

void Nekki_SF2_GUI_Dialogs_StoryDialog__GBPDDFOIDPG
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_StoryDialog_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).JBKOKFGICDL = true;
  (*(pNVar1->vtable)._32_GKPJMHOFIOO.methodPtr)(__this,(pNVar1->vtable)._32_GKPJMHOFIOO.method);
  (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
            (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
  (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
            (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
                    /* WARNING: Could not recover jumptable at 0x033c060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
            (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
  return;
}


// ===== protected virtual void IAKHIFOFLGO()  [RVA 0x32C0610]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$IAKHIFOFLGO @ RVA 0x32C0610

void Nekki_SF2_GUI_Dialogs_StoryDialog__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Action_LBMOOFGGPEB__o **ppSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_04;
  System_Action_LBMOOFGGPEB__o *action;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__o SStack_b8;
  System_Collections_Generic_List_Enumerator_T__o SStack_a0;
  
  if ((DAT_045674bf & 1) == 0) {
    FUN_01bab630(&System_Action<LBMOOFGGPEB>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_get_Current__
                );
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_LKDOJNIJLBE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo);
    DAT_045674bf = 1;
  }
  SStack_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_a0.fields._index = 0;
  SStack_a0.fields._version = 0;
  SStack_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PKCGAKMEKFG;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&SStack_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
              );
    SStack_a0.fields._list =
         (System_Collections_Generic_List_T__o *)
         CONCAT44(SStack_b8.fields._list._4_4_,(int32_t)SStack_b8.fields._list);
    SStack_a0.fields._index = SStack_b8.fields._index;
    SStack_a0.fields._version = SStack_b8.fields._version;
    SStack_a0.fields._current = SStack_b8.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&SStack_a0,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                        );
      pIVar1 = SStack_a0.fields._current;
      if (!bVar2) break;
      if (SStack_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (SStack_a0.fields._current[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<Bounds>
                        (*(System_Collections_Generic_List_T__o **)
                          ((long)SStack_a0.fields._current[1].monitor + 0x150),
                         Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
      if (!bVar2) {
        if (pIVar1[1].monitor == (Nekki_SF2_GUI_TextPic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar6 = Nekki_SF2_GUI_TextPic__LocalAlignedTextMeshLastLineBounds_Anchored
                          (pIVar1[1].monitor,8,(MethodInfo *)0x0);
        __this_01 = pIVar1[1].klass;
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar5 = *(float *)&(__this_01->_2).nested_type_count;
        __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
        if (pIVar1[1].monitor == (UnityEngine_UI_Graphic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = UnityEngine_UI_Graphic__get_rectTransform(pIVar1[1].monitor,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar7 = UnityEngine_Transform__get_localPosition
                          ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        value.fields.z = UVar6.fields.z + UVar7.fields.z;
        value.fields.y = UVar6.fields.y + (fVar5 + fVar5) * 0.5 + UVar7.fields.y;
        value.fields.x = UVar6.fields.x + 20.0 + UVar7.fields.x;
        UnityEngine_Transform__set_localPosition
                  ((UnityEngine_Transform_o *)__this_02,value,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&SStack_a0,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
              );
    __this_04 = (__this->fields).super.DIKHJEINHID;
    if (__this_04 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
      method_00 = extraout_x1;
      if (0 < (__this_04->fields)._size) {
        if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
        if (action == (System_Action_LBMOOFGGPEB__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_LBMOOFGGPEB__o *)
                   thunk_FUN_01bda818(System_Action<LBMOOFGGPEB>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar3 = &Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
          *ppSVar3 = action;
          thunk_FUN_01c20e04(ppSVar3,action);
        }
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_04,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
        (*(__this->klass->vtable)._41_FCHNOIGHEEO.methodPtr)
                  (__this,(__this->klass->vtable)._41_FCHNOIGHEEO.method);
        method_00 = extraout_x1_00;
      }
      if ((__this->fields).JJDLGLNKNBB != false) {
        if ((__this->fields).MBLMCOMELHB < 1) {
          SStack_b8.fields._list._0_4_ = (__this->fields).LBEMKAMMEFG;
          uVar4 = thunk_FUN_01bda448(int_TypeInfo,&SStack_b8);
          (*(__this->klass->vtable)._13_OnClose.methodPtr)
                    (__this,uVar4,(__this->klass->vtable)._13_OnClose.method);
          method_00 = extraout_x1_01;
        }
        Nekki_SF2_GUI_Dialogs_StoryDialog__GDIKHBMNJPH(__this,method_00);
        (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                  (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void FCHNOIGHEEO()  [RVA 0x32C0614]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$FCHNOIGHEEO @ RVA 0x32C0614

void Nekki_SF2_GUI_Dialogs_StoryDialog__FCHNOIGHEEO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  undefined4 local_3c;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045674c7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_get_Current__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_GetEnumerator__);
    DAT_045674c7 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.DIKHJEINHID;
  if (__this_00 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LBMOOFGGPEB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_MoveNext__);
    if (!bVar1) goto LAB_033c06fc;
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (0 < (long)local_38.fields._current[5].monitor);
  local_3c = 0;
  uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_3c);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
LAB_033c06fc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_Dispose__);
  return;
}


// ===== protected virtual void PMLICAPHBJD()  [RVA 0x32C079C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$PMLICAPHBJD @ RVA 0x32C079C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_StoryDialog__PMLICAPHBJD
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Nullable_Vector2__o *pSVar1;
  bool bVar2;
  bool bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *extraout_x1;
  MethodInfo_27FC874 *method_00;
  LabelButton_o *pLVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  undefined8 in_d1;
  undefined4 uVar7;
  float value;
  int iVar8;
  float value_00;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  System_Nullable_Vector2__o __this_03;
  System_Nullable_Vector2__o __this_04;
  System_Nullable_Vector2__o __this_05;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  undefined8 local_60;
  float local_58;
  
  uVar7 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_045674c8 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674c8 = 1;
    method = extraout_x1;
  }
  pLVar6 = (__this->fields).super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if (!bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pLVar6,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_02 = (UnityEngine_RectTransform_o *)0x0;
  if (!bVar2) {
    pLVar6 = (__this->fields).super._btnCancel;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    __this_02 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pLVar6,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
  }
  __this_00 = (__this->fields).super._bottomStripe;
  if ((__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
     (pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c0bbc;
  UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
  iVar8 = (__this->fields).LPEFIPGJDJH;
  pLVar6 = (__this->fields).super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UVar11.fields.x,CONCAT44(uVar7,UVar11.fields.y),UVar11.fields.z);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  }
  else {
    bVar2 = false;
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo_27FC874 *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pLVar6 = (__this->fields).super._btnCancel;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  }
  else {
    bVar3 = false;
  }
  value = UVar11.fields.y + (float)iVar8;
  if (bVar2 == false) {
    if (bVar3 == false) {
      return;
    }
  }
  else {
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX
              (pUVar4,UVar12.fields.m_Width * -0.5 + 740.0,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_033c0bbc;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,value,(MethodInfo *)0x0);
    if ((__this->fields).PONEGBOFDBK.fields.hasValue != false) {
      __this_03.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
      __this_03.fields._0_8_ = &(__this->fields).PONEGBOFDBK;
      UVar9 = System_Nullable<Vector2>__get_Value(__this_03,(MethodInfo_27FC88C *)method_00);
      UVar9.fields.y = (float)((ulong)UVar9.fields >> 0x20);
      UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar9,(MethodInfo *)0x0);
    }
    if (bVar3 == false) {
      pSVar1 = &(__this->fields).PONEGBOFDBK;
      if ((__this->fields).PONEGBOFDBK.fields.hasValue == false) {
        UVar10 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      }
      else {
        __this_04.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
        __this_04.fields._0_8_ = pSVar1;
        UVar10 = (UnityEngine_Vector2_Fields)
                 System_Nullable<Vector2>__get_Value(__this_04,(MethodInfo_27FC88C *)method_00);
      }
      local_58 = 0.0;
      local_60 = 0;
      value_01.fields.x = UVar10.x;
      value_01.fields.y = (float)((ulong)UVar10 >> 0x20);
      __this_05.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
      __this_05.fields._0_8_ = &local_60;
      System_Nullable<Vector2>___ctor(__this_05,value_01,method_00);
      (__this->fields).PONEGBOFDBK.fields.value.fields.y = local_58;
      (pSVar1->fields).hasValue = (bool_conflict)(undefined1)local_60;
      *(undefined3 *)&(pSVar1->fields).field_0x1 = local_60._1_3_;
      (pSVar1->fields).value.fields.x = (float)local_60._4_4_;
      UnityEngine_TransformExtensions__AddLocalPositionX
                ((UnityEngine_Transform_o *)__this_01,-50.0,(MethodInfo *)0x0);
      value_02.fields.x = value_01.fields.x + 100.0;
      value_02.fields.y = value_01.fields.y;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  pLVar6 = (__this->fields).super._btnOK;
  if ((pLVar6 == (LabelButton_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0bbc;
  bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  if (bVar2) {
    pLVar6 = (__this->fields).super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c0bbc;
    UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar13 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    value_00 = UVar11.fields.x + -60.0 + (UVar12.fields.m_Width + UVar13.fields.m_Width) * -0.5;
  }
  else {
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033c0bbc;
    UVar12 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    value_00 = (1680.0 - UVar12.fields.m_Width) * 0.5 + -740.0;
  }
  pLVar6 = (__this->fields).super._btnCancel;
  if (pLVar6 != (LabelButton_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,value_00,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super._btnCancel;
    if (pLVar6 != (LabelButton_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033c0bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x32C0BC0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$GKPJMHOFIOO @ RVA 0x32C0BC0

void Nekki_SF2_GUI_Dialogs_StoryDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *transform;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar5;
  Nekki_SF2_GUI_Dialogs_StoryDialog_c *pNVar6;
  Il2CppMethodPointer pIVar7;
  Nekki_SF2_GUI_CompositeImage_o *pNVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o value;
  
  if ((DAT_045674c9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674c9 = 1;
    method = extraout_x1;
  }
  pNVar8 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._compositeImage;
    if (pNVar8 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_033c0d78;
    Nekki_SF2_GUI_CompositeImage__set_Data(pNVar8,(__this->fields).MEELBFGHELO,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).MEELBFGHELO != (IGNEHHMICKB_o *)0x0)) {
    pNVar2 = (__this->fields)._portrait;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0d78;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  }
  else {
    pNVar2 = (__this->fields)._portrait;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c0d78;
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._35_EMNMKABDINP.methodPtr)
              (__this,(__this->fields).DHLCIGNKKPP,(__this->klass->vtable)._35_EMNMKABDINP.method);
  }
  pNVar6 = __this->klass;
  if ((__this->fields).NHNBEPIDGIB == false) {
    pIVar7 = (pNVar6->vtable)._39_IFHIOMOEIPE.methodPtr;
    pMVar5 = (pNVar6->vtable)._39_IFHIOMOEIPE.method;
  }
  else {
    pIVar7 = (pNVar6->vtable)._36_IMHIFGGIIMF.methodPtr;
    pMVar5 = (pNVar6->vtable)._36_IMHIFGGIIMF.method;
  }
  (*pIVar7)(__this,pMVar5);
  pUVar3 = (__this->fields).super._content;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,20.0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).super._content;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar10 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).super._content;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          fVar9 = (__this->fields).OAMNJIMNBAC;
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = fVar9 * 0.9 * 0.8;
            value.fields.x = UVar10.fields.m_Width;
            UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_033c0d78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void CJEEDJHKDBE(NBLEEDEAPHB FDLJCNLNCOC)  [RVA 0x32C0D7C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$CJEEDJHKDBE @ RVA 0x32C0D7C

/* WARNING: Removing unreachable block (ram,0x033c12c4) */

void Nekki_SF2_GUI_Dialogs_StoryDialog__CJEEDJHKDBE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_TimerLabel_o **ppNVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_Collections_Generic_List_LBMOOFGGPEB__o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  VirtualInvokeData *pVVar13;
  UnityEngine_Component_o *__this_00;
  System_String_o *pSVar14;
  System_String_o *b;
  long *plVar15;
  undefined8 *puVar16;
  UnityEngine_Transform_o *parent;
  LBMOOFGGPEB_o *pLVar17;
  LBMOOFGGPEB_array *pLVar18;
  System_Collections_IEnumerator_c *pSVar19;
  long lVar20;
  ulong uVar21;
  int32_t *piVar22;
  int *piVar23;
  Nekki_SF2_GUI_TimerLabel_o *pNVar24;
  int local_64;
  
  if ((DAT_045674ca & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_045674ca = 1;
  }
  local_64 = 0;
  if (FDLJCNLNCOC == (NBLEEDEAPHB_o *)0x0) goto LAB_033c12bc;
  (*(__this->klass->vtable)._38_IMGPKHODFAN.methodPtr)
            ((FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.r,(FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.g,
             (FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.b,(FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.a,
             __this,(__this->klass->vtable)._38_IMGPKHODFAN.method);
  (*(__this->klass->vtable)._45_GBHBDMMKPLO.methodPtr)
            (__this,(FDLJCNLNCOC->fields).ABCHAOKFLGL,(__this->klass->vtable)._45_GBHBDMMKPLO.method
            );
  pNVar24 = (__this->fields)._timerLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppNVar1 = &(__this->fields)._timerLabel;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((*ppNVar1 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c12bc;
    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
  }
  pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
  if (pLVar17 == (LBMOOFGGPEB_o *)0x0) {
    *ppNVar1 = (Nekki_SF2_GUI_TimerLabel_o *)0x0;
    thunk_FUN_01c20e04(ppNVar1);
    iVar8 = -1;
  }
  else {
    pSVar10 = (__this->fields).super.DIKHJEINHID;
    if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
    iVar8 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pLVar17,
                       Method_System_Collections_Generic_List<LBMOOFGGPEB>_IndexOf__);
    lVar20 = Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__;
    if (iVar8 == -1) {
      pSVar10 = (__this->fields).super.DIKHJEINHID;
      if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      pLVar18 = (pSVar10->fields)._items;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (pLVar18 == (LBMOOFGGPEB_array *)0x0) goto LAB_033c12bc;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pLVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        pLVar18->m_Items[(int)uVar5] = pLVar17;
        thunk_FUN_01c20e04(pLVar18->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pLVar17,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      pNVar24 = (Nekki_SF2_GUI_TimerLabel_o *)
                (*(__this->klass->vtable)._37_DBNAPIBFLEB.methodPtr)
                          (__this,FDLJCNLNCOC,(__this->klass->vtable)._37_DBNAPIBFLEB.method);
      (__this->fields)._timerLabel = pNVar24;
      thunk_FUN_01c20e04(ppNVar1,pNVar24);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
      LBMOOFGGPEB__JBGIAEJIKCA(pLVar17,*ppNVar1,(MethodInfo *)0x0);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
      LBMOOFGGPEB__LLCONNGHGKD(pLVar17,(MethodInfo *)0x0);
      pSVar10 = (__this->fields).super.DIKHJEINHID;
      if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
      iVar8 = (pSVar10->fields)._size;
      (__this->fields).JBKOKFGICDL = true;
      iVar8 = iVar8 + -1;
    }
    pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
    if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
    *ppNVar1 = (pLVar17->fields).NFCJGLPMIHH;
    thunk_FUN_01c20e04(ppNVar1);
  }
  pUVar9 = (__this->fields).super._content;
  if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar11 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_Transform_o *)0x0)) {
    pSVar12 = UnityEngine_Transform__GetEnumerator(pUVar11,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar19 = pSVar12->klass;
      uVar3._0_1_ = (pSVar19->_2).rank;
      uVar3._1_1_ = (pSVar19->_2).minimumAlignment;
      uVar21 = (ulong)uVar3;
      if (uVar21 != 0) {
        piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar13 = pSVar19->vtable + *piVar22;
            goto LAB_033c1048;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar13 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,0)
      ;
LAB_033c1048:
      bVar7 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if ((bVar7 & 1) == 0) {
        bVar7 = 0;
        break;
      }
      pSVar19 = pSVar12->klass;
      uVar4._0_1_ = (pSVar19->_2).rank;
      uVar4._1_1_ = (pSVar19->_2).minimumAlignment;
      uVar21 = (ulong)uVar4;
      if (uVar21 != 0) {
        piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar13 = pSVar19->vtable + (*piVar22 + 1);
            goto LAB_033c10ac;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar13 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,1)
      ;
LAB_033c10ac:
      __this_00 = (UnityEngine_Component_o *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pUVar9 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = UnityEngine_GameObject__get_tag(pUVar9,(MethodInfo *)0x0);
      local_64 = iVar8 + 0x4d2;
      b = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar14,b,(MethodInfo *)0x0);
    } while (!bVar6);
    plVar15 = (long *)thunk_FUN_01bda71c(pSVar12,System_IDisposable_TypeInfo);
    if (plVar15 != (long *)0x0) {
      lVar20 = *plVar15;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar23 + -2) == System_IDisposable_TypeInfo) {
            puVar16 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_033c1194;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)FUN_01b81914(plVar15,System_IDisposable_TypeInfo,0);
LAB_033c1194:
      (*(code *)*puVar16)(plVar15,puVar16[1]);
    }
    pNVar24 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar24,(MethodInfo *)0x0);
    if (((bVar7 | bVar6 ^ 0xffU) & 1) != 0) {
LAB_033c1270:
      if ((FDLJCNLNCOC->fields).EHKKBKHGDHE != false) {
        (*(__this->klass->vtable)._49_EGEMNGPLOKE.methodPtr)
                  (__this,FDLJCNLNCOC,(__this->klass->vtable)._49_EGEMNGPLOKE.method);
      }
      return;
    }
    if (*ppNVar1 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                ((Nekki_SF2_GUI_LabelAlias_o *)*ppNVar1,0x67,(MethodInfo *)0x0);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if ((pLVar17 != (LBMOOFGGPEB_o *)0x0) &&
         (pNVar24 = *ppNVar1, pNVar24 != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) {
        (*(pNVar24->klass->vtable)._23_set_color.methodPtr)
                  ((pLVar17->fields).BANIDGFENDE.fields.r,(pLVar17->fields).BANIDGFENDE.fields.g,
                   (pLVar17->fields).BANIDGFENDE.fields.b,(pLVar17->fields).BANIDGFENDE.fields.a,
                   pNVar24,(pNVar24->klass->vtable)._23_set_color.method);
        pNVar24 = *ppNVar1;
        local_64 = iVar8 + 0x4d2;
        pSVar14 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        if (pNVar24 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
          UnityEngine_Component__set_tag
                    ((UnityEngine_Component_o *)pNVar24,pSVar14,(MethodInfo *)0x0);
          if (*ppNVar1 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0);
            pUVar9 = (__this->fields).super._content;
            if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
               (parent = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
               pUVar11 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar11,parent,false,(MethodInfo *)0x0);
              goto LAB_033c1270;
            }
          }
        }
      }
    }
  }
LAB_033c12bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void EGHBJLDNOMA()  [RVA 0x32C139C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$EGHBJLDNOMA @ RVA 0x32C139C

void Nekki_SF2_GUI_Dialogs_StoryDialog__EGHBJLDNOMA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Action_object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  int32_t DNBBBGEENMM;
  LabelButton_o *pLVar2;
  
  if ((DAT_045674cb & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_FGBCBEAPMCH__);
    DAT_045674cb = 1;
  }
  DNBBBGEENMM = 3;
  if ((__this->fields).ECIEHGDKKGO == false) {
    DNBBBGEENMM = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar2 = (__this->fields).super._btnOK;
  pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pLVar2 != (LabelButton_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).super._btnOK;
    pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar2 != (LabelButton_o *)0x0) {
      SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnOK;
      pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar2 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields).super._btnCancel;
        if ((pLVar2 != (LabelButton_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_00,(__this->fields).ECIEHGDKKGO,(MethodInfo *)0x0);
          if ((__this->fields).ECIEHGDKKGO == false) {
LAB_033c1554:
                    /* WARNING: Could not recover jumptable at 0x033c1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                      (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
            return;
          }
          pLVar2 = (__this->fields).super._btnCancel;
          pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (pLVar2 != (LabelButton_o *)0x0) {
            SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
            pLVar2 = (__this->fields).super._btnCancel;
            pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pLVar2 != (LabelButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
              goto LAB_033c1554;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void GBHBDMMKPLO(string NONPLOOOOAG)  [RVA 0x32C1578]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$GBHBDMMKPLO @ RVA 0x32C1578

void Nekki_SF2_GUI_Dialogs_StoryDialog__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TimerLabel_o *pNVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045674cc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674cc = 1;
  }
  pNVar2 = (__this->fields)._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,NONPLOOOOAG,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_0455fa77 == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa77 = '\x01';
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar3,(UnityEngine_Vector3_o)
                          (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if ((__this->fields).FKDKFGIFBIJ != false) {
          Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA(__this,(__this->fields)._text,method_00);
        }
        pNVar4 = (__this->fields)._timerLabel;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
LAB_033c16c8:
          (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                    (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
          (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
                    (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
          (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
                    (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
          (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                    (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
                    /* WARNING: Could not recover jumptable at 0x033c1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._50_NDGMODGKNEG.methodPtr)
                    (__this,(__this->klass->vtable)._50_NDGMODGKNEG.method);
          return;
        }
        pNVar4 = (__this->fields)._timerLabel;
        if (pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._text;
          if (((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
              (__this_00 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
              __this_00 != (UnityEngine_Transform_o *)0x0)) &&
             (value = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._timerLabel;
            if ((pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) &&
               (__this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               __this_01 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
              (__this->fields).JBKOKFGICDL = true;
              goto LAB_033c16c8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void AGDKMMJMLFM(object IMMNELPBGIF)  [RVA 0x32C1738]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$AGDKMMJMLFM @ RVA 0x32C1738

void Nekki_SF2_GUI_Dialogs_StoryDialog__AGDKMMJMLFM
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  
  if ((DAT_045674cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674cd = 1;
  }
  pSVar3 = (__this->fields).NMBDHGCKNII;
  index = (__this->fields).NOHLNBNJKHD + 1;
  (__this->fields).NOHLNBNJKHD = index;
  if (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (index == iVar1 + -1) {
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                (__this,pIVar4,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
      bVar2 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields).NMBDHGCKNII;
        if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
           (pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,
                                (__this->fields).NOHLNBNJKHD,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
           pIVar4 == (Il2CppObject *)0x0)) goto LAB_033c18c8;
        pIVar4 = pIVar4 + 2;
      }
      else {
        pIVar4 = (Il2CppObject *)&(__this->fields).BGANBKJCMNM;
      }
      (__this->fields).super.NIEHEOKFPAN = (System_String_o *)pIVar4->klass;
      thunk_FUN_01c20e04();
      UNRECOVERED_JUMPTABLE = (__this->klass->vtable)._44_EGHBJLDNOMA.methodPtr;
      pMVar5 = (__this->klass->vtable)._44_EGHBJLDNOMA.method;
    }
    else {
      if (iVar1 <= index) {
                    /* WARNING: Could not recover jumptable at 0x033c18c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._13_OnClose.methodPtr)
                  (__this,IMMNELPBGIF,(__this->klass->vtable)._13_OnClose.method);
        return;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                (__this,pIVar4,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
      pSVar3 = (__this->fields).NMBDHGCKNII;
      if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,
                              (__this->fields).NOHLNBNJKHD,
                              Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
         pIVar4 == (Il2CppObject *)0x0)) goto LAB_033c18c8;
      (*(__this->klass->vtable)._47_AOHAKEEHGKG.methodPtr)
                (__this,pIVar4[2].klass,(__this->klass->vtable)._47_AOHAKEEHGKG.method);
      UNRECOVERED_JUMPTABLE = (__this->klass->vtable)._42_PMLICAPHBJD.methodPtr;
      pMVar5 = (__this->klass->vtable)._42_PMLICAPHBJD.method;
    }
                    /* WARNING: Could not recover jumptable at 0x033c18a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(__this,pMVar5);
    return;
  }
LAB_033c18c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void AOHAKEEHGKG(string EHNFGMGKCHO)  [RVA 0x32C18CC]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$AOHAKEEHGKG @ RVA 0x32C18CC

void Nekki_SF2_GUI_Dialogs_StoryDialog__AOHAKEEHGKG
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_object__o *pSVar2;
  LabelButton_o *pLVar3;
  
  if ((DAT_045674ce & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_045674ce = 1;
  }
  ppSVar1 = &(__this->fields).super.NIEHEOKFPAN;
  *ppSVar1 = EHNFGMGKCHO;
  thunk_FUN_01c20e04(ppSVar1,EHNFGMGKCHO);
  (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
            (__this,(__this->fields).super._btnOK,1,(__this->klass->vtable)._15_ACICKHKFILK.method);
  pLVar3 = (__this->fields).super._btnOK;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pLVar3 != (LabelButton_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
    pLVar3 = (__this->fields).super._btnOK;
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar3 != (LabelButton_o *)0x0) {
      SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).super._btnOK;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar3 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x033c1a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                  (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JHAKFKFPJJB(Unit HOKBHLPPCAH)  [RVA 0x32C1A0C]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$JHAKFKFPJJB @ RVA 0x32C1A0C

void Nekki_SF2_GUI_Dialogs_StoryDialog__JHAKFKFPJJB(long *__this)

{
  *(undefined1 *)(__this + 0x35) = 1;
  (**(code **)(*__this + 0x338))(__this,*(undefined8 *)(*__this + 0x340));
  (**(code **)(*__this + 0x248))(__this,*(undefined8 *)(*__this + 0x250));
  (**(code **)(*__this + 0x218))(__this,*(undefined8 *)(*__this + 0x220));
                    /* WARNING: Could not recover jumptable at 0x033c060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*__this + 0x3d8))(__this,*(undefined8 *)(*__this + 0x3e0));
  return;
}


// ===== protected virtual void HCCGKDLAFOJ()  [RVA 0x32C1A10]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$HCCGKDLAFOJ @ RVA 0x32C1A10

void Nekki_SF2_GUI_Dialogs_StoryDialog__HCCGKDLAFOJ
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  undefined4 uVar1;
  Il2CppObject *MLANEHFOIPK;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  System_Collections_Generic_List_Enumerator_T__o local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  
  if ((DAT_045674cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_12039/*"ShopPieces.Stripe"*/);
    FUN_01bab630(&StringLiteral_8312/*"LabelAlias"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10457/*"PriceBackground"*/);
    DAT_045674cf = 1;
  }
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  pUVar3 = (__this->fields)._footerTextsSprite;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._footerTextsSprite;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).OMJHNOCDBEH;
      if (__this_00 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_c8,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
        iVar7 = 0;
                    /* try { // try from 033c1b58 to 034c1cf3 has its CatchHandler @ 033c1b58
                       catch() { ... } // from try @ 033c1b58 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c1fe0 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2100 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2108 with catch @ 033c1b58
                       catch() { ... } // from try @ 033c2244 with catch @ 033c1b58 */
        fVar9 = 0.0;
        local_b0.fields._current = local_c8.fields._current;
        local_b0.fields._index = local_c8.fields._index;
        local_b0.fields._version = local_c8.fields._version;
        local_b0.fields._list = local_c8.fields._list;
        fVar10 = 0.0;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_b0,
                                  Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__
                                 ), MLANEHFOIPK = local_b0.fields._current, bVar2) {
          pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
          UnityEngine_GameObject___ctor(pUVar3,StringLiteral_8312/*"LabelAlias"*/,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = (Nekki_SF2_GUI_LabelAlias_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (pUVar3,Method_UnityEngine_GameObject_AddComponent<LabelAlias>__);
          if ((NBLEEDEAPHB_o *)MLANEHFOIPK == (NBLEEDEAPHB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          CJNHFNHJHPE = ((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ALFDOLMJLKI;
          if (CJNHFNHJHPE < 1) {
            CJNHFNHJHPE = 0x67;
          }
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(__this_01,true,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(__this_01,0.7,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                    ((ulong)(uint)(((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).
                                  fields.r,
                     (ulong)(uint)(((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).
                                  fields.g,
                     (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).fields.b,
                     (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ONNNBMCAJMN).fields.a,
                     __this_01,(__this_01->klass->vtable)._23_set_color.method);
          UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)__this_01,4,(MethodInfo *)0x0)
          ;
          UnityEngine_UI_Text__set_alignByGeometry
                    ((UnityEngine_UI_Text_o *)__this_01,true,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_verticalOverflow
                    ((UnityEngine_UI_Text_o *)__this_01,1,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_RectTransform__set_sizeDelta
                    (pUVar5,(UnityEngine_Vector2_o)0x4120000044d20000,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_Alias
                    (__this_01,((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ABCHAOKFLGL,
                     (MethodInfo *)0x0);
          if (0 < iVar7) {
            fVar9 = fVar9 + 32.5;
          }
          fVar8 = (float)(*(__this_01->klass->vtable)._82_get_preferredHeight.methodPtr)
                                   (__this_01,
                                    (__this_01->klass->vtable)._82_get_preferredHeight.method);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._footerTextsSprite;
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1cf4 to 034c1d1b has its CatchHandler @ 033c218c */
          UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          fVar10 = fVar10 + fVar8 * -0.5;
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,fVar10 + (float)((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->
                                            OJDCNGCCOBA,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar4,(float)((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->ILAJANAMHDM,
                     (MethodInfo *)0x0);
          fVar8 = (float)(*(__this_01->klass->vtable)._82_get_preferredHeight.methodPtr)
                                   (__this_01,
                                    (__this_01->klass->vtable)._82_get_preferredHeight.method);
                    /* try { // try from 033c1d50 to 034c1d7b has its CatchHandler @ 033c2188 */
          if (((NBLEEDEAPHB_Fields *)((long)MLANEHFOIPK + 0x10))->KOLIPNBCKOB !=
              (LBMOOFGGPEB_o *)0x0) {
            pUVar3 = (__this->fields)._footerTextsSprite;
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
                      (__this,__this_01,(NBLEEDEAPHB_o *)MLANEHFOIPK,pUVar4,in_x4);
          }
                    /* try { // try from 033c1d84 to 034c1d8b has its CatchHandler @ 033c2170 */
          pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 033c1d94 to 034c1d9b has its CatchHandler @ 033c2174 */
          UnityEngine_GameObject___ctor(pUVar3,StringLiteral_10457/*"PriceBackground"*/,(MethodInfo *)0x0);
                    /* try { // try from 033c1da0 to 034c1da7 has its CatchHandler @ 033c2180 */
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1db0 to 034c1db7 has its CatchHandler @ 033c2184 */
          __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (pUVar3,
                                 Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
                    /* try { // try from 033c1db8 to 034c1dc7 has its CatchHandler @ 033c217c */
          if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = StringLiteral_14092/*"UI/Atlases/"*/._4_4_;
          (__this_02->fields).super.m_PixelsPerUnitMultiplier =
               (float)(undefined4)StringLiteral_14092/*"UI/Atlases/"*/;
          (__this_02->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
          thunk_FUN_01c20e04(&(__this_02->fields).super.m_PixelsPerUnitMultiplier);
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (__this_02,StringLiteral_12039/*"ShopPieces.Stripe"*/,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._footerTextsSprite;
                    /* try { // try from 033c1e04 to 034c1e0f has its CatchHandler @ 033c2178 */
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e20 to 034c1e23 has its CatchHandler @ 033c2150 */
          UnityEngine_Transform__SetParent(pUVar4,pUVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 033c1e2c to 034c1e33 has its CatchHandler @ 033c216c */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                    /* try { // try from 033c1e44 to 034c1e4b has its CatchHandler @ 033c2168 */
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e50 to 034c1e57 has its CatchHandler @ 033c215c */
          UnityEngine_RectTransform__set_sizeDelta
                    (pUVar5,(UnityEngine_Vector2_o)0x42e4000044960000,(MethodInfo *)0x0);
                    /* try { // try from 033c1e60 to 034c1e67 has its CatchHandler @ 033c2164 */
                    /* try { // try from 033c1e68 to 034c1e7b has its CatchHandler @ 033c2158 */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033c1e80 to 034c1e8b has its CatchHandler @ 033c2160 */
          UVar11 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (pUVar4,UVar11.fields.x,(MethodInfo *)0x0);
                    /* try { // try from 033c1e9c to 034c1ea3 has its CatchHandler @ 033c2130 */
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                    /* try { // try from 033c1eac to 034c1eb3 has its CatchHandler @ 033c2134 */
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar11 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 033c1ec4 to 034c1ecb has its CatchHandler @ 033c2138 */
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,UVar11.fields.y,(MethodInfo *)0x0);
                    /* try { // try from 033c1ed0 to 034c1ed7 has its CatchHandler @ 033c2140 */
          pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                    /* try { // try from 033c1ee8 to 034c1eef has its CatchHandler @ 033c2144 */
                    /* try { // try from 033c1ef0 to 034c1f03 has its CatchHandler @ 033c2148 */
          fVar9 = fVar9 + UVar13.fields.m_Height;
          fVar10 = fVar10 - (fVar8 * 0.5 + 32.5);
          iVar7 = iVar7 + 1;
        }
                    /* try { // try from 033c1f04 to 034c1f0f has its CatchHandler @ 033c214c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_b0,
                   Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
        pUVar3 = (__this->fields)._footerTextsSprite;
                    /* try { // try from 033c1f28 to 034c1f2b has its CatchHandler @ 033c2114 */
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
           pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
          value.fields.y = fVar9;
          value.fields.x = 1680.0;
                    /* try { // try from 033c1f38 to 034c1f67 has its CatchHandler @ 033c2118 */
          UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
          pUVar4 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._textsSprite;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              fVar9 = (__this->fields).OAMNJIMNBAC;
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._textsSprite;
                    /* try { // try from 033c1f80 to 034c1fa3 has its CatchHandler @ 033c212c */
                if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar5 = (UnityEngine_RectTransform_o *)
                             UnityEngine_GameObject__GetComponent<object>
                                       (pUVar3,
                                        Method_UnityEngine_GameObject_GetComponent<RectTransform>__)
                   , pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                  UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._footerTextsSprite;
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033c1fa4 to 034c1fab has its CatchHandler @ 033c2128 */
                    /* try { // try from 033c1fb0 to 034c1fbb has its CatchHandler @ 033c2124 */
                    fVar10 = UVar12.fields.y - UVar13.fields.m_Height;
                    /* try { // try from 033c1fc0 to 034c1fdf has its CatchHandler @ 033c213c */
                    fVar9 = UVar11.fields.y + fVar9 * -0.9 * 0.8 * 0.5;
                    if (fVar10 <= fVar9) {
                      fVar9 = fVar10;
                    }
                    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 033c1fe0 to 034c20e7 has its CatchHandler @ 033c1b58 */
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar4,fVar9 + -60.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDIKHBMNJPH()  [RVA 0x32BFB74]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$GDIKHBMNJPH @ RVA 0x32BFB74

void Nekki_SF2_GUI_Dialogs_StoryDialog__GDIKHBMNJPH
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  IGFGDDANEPE_o *__this_00;
  int64_t iVar2;
  AMJMGFCCAKN_o *pAVar3;
  
  if ((DAT_045674d0 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045674d0 = 1;
  }
  __this_00 = (__this->fields).AAIHPGBKKNM;
  if (__this_00 == (IGFGDDANEPE_o *)0x0) {
    pAVar3 = (__this->fields).GEMEHKONBIB;
    if (pAVar3 == (AMJMGFCCAKN_o *)0x0) {
      (__this->fields).MBLMCOMELHB = (__this->fields).MBLMCOMELHB + -1;
      return;
    }
    iVar2 = (pAVar3->fields).CJKLJJIMECK;
    uVar1 = (GameUtils_TypeInfo->_2).cctor_finished;
  }
  else {
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
    uVar1 = (GameUtils_TypeInfo->_2).cctor_finished;
  }
  if (uVar1 == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
  iVar2 = GameUtils__HCDHCLBPBHN(iVar2,(MethodInfo *)0x0);
  (__this->fields).MBLMCOMELHB = iVar2;
  return;
}


// ===== protected virtual void EGEMNGPLOKE(NBLEEDEAPHB FDLJCNLNCOC)  [RVA 0x32C21C0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$EGEMNGPLOKE @ RVA 0x32C21C0

void Nekki_SF2_GUI_Dialogs_StoryDialog__EGEMNGPLOKE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  undefined8 uVar1;
  int32_t local_24;
  
                    /* catch() { ... } // from try @ 033c21b0 with catch @ 033c21c4 */
                    /* try { // try from 033c21d4 to 034c2243 has its CatchHandler @ 033c2258 */
  if ((DAT_045674d1 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045674d1 = 1;
  }
  (__this->fields).JJDLGLNKNBB = true;
  if (FDLJCNLNCOC != (NBLEEDEAPHB_o *)0x0) {
    (__this->fields).MBLMCOMELHB = (FDLJCNLNCOC->fields).AOOKMODPLGM;
    (__this->fields).LBEMKAMMEFG = (FDLJCNLNCOC->fields).IGLHCNLNIPK;
    (__this->fields).AAIHPGBKKNM = (FDLJCNLNCOC->fields).KDLMLBDNMJI;
    thunk_FUN_01c20e04(&(__this->fields).AAIHPGBKKNM);
    (__this->fields).GEMEHKONBIB = (FDLJCNLNCOC->fields).MPKLNNHFFAF;
    thunk_FUN_01c20e04(&(__this->fields).GEMEHKONBIB);
    if ((__this->fields).MBLMCOMELHB < 1) {
      local_24 = (__this->fields).LBEMKAMMEFG;
                    /* try { // try from 033c2244 to 034c224f has its CatchHandler @ 033c1b58 */
                    /* try { // try from 033c2250 to 034c2257 has its CatchHandler @ 033c2258 */
      uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
                    /* catch() { ... } // from try @ 033c21d4 with catch @ 033c2258
                       catch() { ... } // from try @ 033c2250 with catch @ 033c2258 */
      (*(__this->klass->vtable)._13_OnClose.methodPtr)
                (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
    }
    (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
              (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetImageRotation(float BIMDFEIIHBH)  [RVA 0x32C2298]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$SetImageRotation @ RVA 0x32C2298

void Nekki_SF2_GUI_Dialogs_StoryDialog__SetImageRotation
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,float BIMDFEIIHBH,MethodInfo *method)

{
  (__this->fields).EMEOGGLKCEB = BIMDFEIIHBH;
  return;
}


// ===== protected virtual void NDGMODGKNEG()  [RVA 0x32C22A0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$NDGMODGKNEG @ RVA 0x32C22A0

void Nekki_SF2_GUI_Dialogs_StoryDialog__NDGMODGKNEG
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  pNVar1 = (__this->fields)._text;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._text;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar2,UVar4.fields.x + (__this->fields).CILDLHDCCLG.fields.x,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._text;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar2,UVar4.fields.y + (__this->fields).CILDLHDCCLG.fields.y,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Close()  [RVA 0x32C2348]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$Close @ RVA 0x32C2348

void Nekki_SF2_GUI_Dialogs_StoryDialog__Close
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_045674d2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_045674d2 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== public void .ctor()  [RVA 0x32C23B8]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$.ctor @ RVA 0x32C23B8

void Nekki_SF2_GUI_Dialogs_StoryDialog___ctor
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_00;
  MethodInfo *extraout_x1;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  if ((DAT_045674d3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674d3 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  fVar2 = GameUtils__NKPJJJDKFBG((MethodInfo *)0x0);
  (__this->fields).OAMNJIMNBAC = fVar2;
  (__this->fields).NBGPOPHLIFC = 1.0;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  UVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).ACPDELFFFHF = true;
  (__this->fields).LPEFIPGJDJH = 0x78;
  (__this->fields).CILDLHDCCLG.fields = UVar3;
  (__this->fields).ECIEHGDKKGO = true;
  pSVar1 = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  (__this->fields).NMBDHGCKNII = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).NMBDHGCKNII,pSVar1);
  (__this->fields).DHLCIGNKKPP = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).DHLCIGNKKPP);
  (__this->fields).FKDKFGIFBIJ = true;
  (__this->fields).BGANBKJCMNM = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).BGANBKJCMNM);
  (__this->fields).LBEMKAMMEFG = 0x7fffffff;
  pSVar1 = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  (__this->fields).OMJHNOCDBEH = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).OMJHNOCDBEH,pSVar1);
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>__ctor__);
  (__this->fields).PKCGAKMEKFG = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).PKCGAKMEKFG,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KJMBGJFCHOA(LabelAlias GJCPJIFKLAI)  [RVA 0x32BE6A0]
// Nekki.SF2.GUI.Dialogs.StoryDialog$$KJMBGJFCHOA @ RVA 0x32BE6A0

void Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Nekki_SF2_GUI_LabelAlias_o *GJCPJIFKLAI,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if (GJCPJIFKLAI != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    bVar1 = (__this->fields).ACPDELFFFHF;
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)GJCPJIFKLAI,(MethodInfo *)0x0);
    if (bVar1 == false) {
      fVar2 = 0.0;
LAB_033be748:
      UnityEngine_TransformExtensions__SetLocalPositionX(transform,fVar2,(MethodInfo *)0x0);
      return;
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP(__this,method_00);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
      fVar3 = (__this->fields).BNJJNFFCCCA;
      fVar2 = (__this->fields).OAMNJIMNBAC;
      __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)GJCPJIFKLAI,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        fVar2 = (UVar4.fields.x - fVar3) + 40.0 + fVar2 * 0.9 * 0.5 + UVar5.fields.m_Width * 0.5;
        goto LAB_033be748;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

