// TypeDefIndex 788
// Namespace: Nekki.SF2.Core.Fights.Controls
// public class Stick : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler
// Fields:
//   private static Stick CBDMFFMCJBK; // 0x0
//   private Action<GGFFOJJGHGP> LMIKGNKODAL; // 0x20
//   private Action<GGFFOJJGHGP> IIKCIHLOPKJ; // 0x28
//   private Action<GGFFOJJGHGP> JANHEDHPGEG; // 0x30
//   private Image _normalTexture; // 0x38
//   private Image _selectedTexture; // 0x40
//   private Image _normalController; // 0x48
//   private Image _selectedController; // 0x50
//   private Image _flashing; // 0x58
//   private Image _extensionZone; // 0x60
//   private DMMJFKCBHEK HEMCGGBCBKH; // 0x68
//   private float FGKJMFGPODB; // 0x6C
//   private float JFCALENOAKP; // 0x70
//   private float KPEIOMADOJN; // 0x74
//   private float HAEFCMAPGCO; // 0x78
//   private float DANNCCNEPKF; // 0x7C
//   private float EHKCCCMFBDL; // 0x80
//   private float KDNCFIDDAKC; // 0x84
//   private int PDGNMHLGFJC; // 0x88
//   private int FIMMBOGJCFD; // 0x8C
//   private bool IEFGAHDEMCC; // 0x90
//   private bool GOINPGAFMAJ; // 0x91
//   private float POPGDHFBMGG; // 0x94
//   private float MAHPPCLAKLP; // 0x98
//   private float PPNPFHAJCMF; // 0x9C
//   private float ADFFHMIGKMD; // 0xA0
//   private float EJBINLNPDJN; // 0xA4
//   private float JMBOIACABNF; // 0xA8
//   private List<MGNDHCBAPEN<float, float>> FKAHNJIDACB; // 0xB0
//   private Vector3 KHMNGINLJJG; // 0xB8
//   private Dictionary<int, Vector2> DOPAABMBANO; // 0xC8
//   private List<int> PJPCLCHFCEE; // 0xD0
//   private static bool <GBNDCFANILC>k__BackingField; // 0x8
//   private static float LPEJCMJKEPA; // 0xC

// ===== public static bool get_IsVisibleExtensionZoneBounds()  [RVA 0x3068AF4]
// Nekki.SF2.Core.Fights.Controls.Stick$$get_IsVisibleExtensionZoneBounds @ RVA 0x3068AF4

bool Nekki_SF2_Core_Fights_Controls_Stick__get_IsVisibleExtensionZoneBounds(MethodInfo *method)

{
  if ((DAT_04565f14 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f14 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField;
}


// ===== public float GetSafeRadius()  [RVA 0x3068B3C]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetSafeRadius @ RVA 0x3068B3C

float Nekki_SF2_Core_Fights_Controls_Stick__GetSafeRadius
                (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).FGKJMFGPODB;
}


// ===== public static Stick get_Instance()  [RVA 0x3068B44]
// Nekki.SF2.Core.Fights.Controls.Stick$$get_Instance @ RVA 0x3068B44

Nekki_SF2_Core_Fights_Controls_Stick_o *
Nekki_SF2_Core_Fights_Controls_Stick__get_Instance(MethodInfo *method)

{
  if ((DAT_04565f15 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f15 = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public void remove_OnStickEnd(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3068B8C]
// Nekki.SF2.Core.Fights.Controls.Stick$$remove_OnStickEnd @ RVA 0x3068B8C

void Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickEnd
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04565f16 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f16 = 1;
  }
  ppSVar6 = &(__this->fields).JANHEDHPGEG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void Update()  [RVA 0x3068C3C]
// Nekki.SF2.Core.Fights.Controls.Stick$$Update @ RVA 0x3068C3C

void Nekki_SF2_Core_Fights_Controls_Stick__Update
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  MethodInfo *extraout_x1;
  int iVar4;
  UnityEngine_UI_Image_o *pUVar5;
  undefined8 uVar6;
  float fVar8;
  UnityEngine_Vector3_o value;
  ulong uVar7;
  
  if ((DAT_04565f17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f17 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._extensionZone;
  if (DAT_04565f33 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo,method);
    DAT_04565f33 = '\x01';
  }
  uVar1 = 0;
  if (Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField !=
      false) {
    uVar1 = 0x3f800000;
  }
  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              ((ulong)uVar1,0,0,(ulong)uVar1,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
    pUVar5 = (__this->fields)._extensionZone;
    if ((pUVar5 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      fVar8 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA;
      value.fields.z = fVar8 * (__this->fields).KHMNGINLJJG.fields.z;
      value.fields.y = fVar8 * (__this->fields).KHMNGINLJJG.fields.y;
      value.fields.x = fVar8 * (__this->fields).KHMNGINLJJG.fields.x;
      uVar7 = (ulong)(uint)value.fields.y;
      UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._flashing;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pUVar5 = (__this->fields)._flashing;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        uVar6 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
        pUVar3 = (__this->fields)._flashing;
        if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                    (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
          pUVar3 = (__this->fields)._flashing;
          if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (uVar6,uVar7,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
            iVar4 = (__this->fields).PDGNMHLGFJC;
            if ((__this->fields).GOINPGAFMAJ == false) {
              if (iVar4 < 1) {
                (__this->fields).GOINPGAFMAJ = true;
                if (iVar4 == 0) {
                  return;
                }
                (__this->fields).PDGNMHLGFJC = 0;
                return;
              }
              iVar4 = iVar4 - (__this->fields).FIMMBOGJCFD;
            }
            else if (iVar4 < 0xfa) {
              iVar4 = (__this->fields).FIMMBOGJCFD + iVar4;
            }
            else {
              (__this->fields).GOINPGAFMAJ = false;
              if (iVar4 == 0xfa) {
                return;
              }
              iVar4 = 0xfa;
            }
            (__this->fields).PDGNMHLGFJC = iVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HCJBFHKPODJ(bool IDJLHDACOBK)  [RVA 0x3068E48]
// Nekki.SF2.Core.Fights.Controls.Stick$$HCJBFHKPODJ @ RVA 0x3068E48

void Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,bool IDJLHDACOBK,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields)._normalController;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,!IDJLHDACOBK,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._selectedController;
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,IDJLHDACOBK,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._normalTexture;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,!IDJLHDACOBK,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._selectedTexture;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,IDJLHDACOBK,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetStopRadius(float CJNHFNHJHPE)  [RVA 0x3068EE8]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetStopRadius @ RVA 0x3068EE8

void Nekki_SF2_Core_Fights_Controls_Stick__SetStopRadius
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DANNCCNEPKF = CJNHFNHJHPE;
  return;
}


// ===== public bool GetIsRising()  [RVA 0x3068EF0]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetIsRising @ RVA 0x3068EF0

bool Nekki_SF2_Core_Fights_Controls_Stick__GetIsRising
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).GOINPGAFMAJ;
}


// ===== public static void set_IsVisibleExtensionZoneBounds(bool CJNHFNHJHPE)  [RVA 0x3068EF8]
// Nekki.SF2.Core.Fights.Controls.Stick$$set_IsVisibleExtensionZoneBounds @ RVA 0x3068EF8

void Nekki_SF2_Core_Fights_Controls_Stick__set_IsVisibleExtensionZoneBounds
               (bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04565f18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f18 = 1;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== private float GBFOBDIPJDM(Vector2 EKEMKOCPHPO)  [RVA 0x3068F48]
// Nekki.SF2.Core.Fights.Controls.Stick$$GBFOBDIPJDM @ RVA 0x3068F48

float Nekki_SF2_Core_Fights_Controls_Stick__GBFOBDIPJDM
                (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,UnityEngine_Vector2_o EKEMKOCPHPO,
                MethodInfo *method)

{
  return EKEMKOCPHPO.fields.x * EKEMKOCPHPO.fields.x + EKEMKOCPHPO.fields.y * EKEMKOCPHPO.fields.y;
}


// ===== public float GetMovementRadius()  [RVA 0x3068F58]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetMovementRadius @ RVA 0x3068F58

float Nekki_SF2_Core_Fights_Controls_Stick__GetMovementRadius
                (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).KPEIOMADOJN;
}


// ===== private void Start()  [RVA 0x3068F60]
// Nekki.SF2.Core.Fights.Controls.Stick$$Start @ RVA 0x3068F60

/* WARNING: Removing unreachable block (ram,0x0316916c) */

void Nekki_SF2_Core_Fights_Controls_Stick__Start
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_48;
  float fStack_44;
  
  if ((DAT_04565f19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    FUN_01bab630(&StringLiteral_12411/*"Stick.Init - incorrectly cleared _instance"*/);
    DAT_04565f19 = 1;
    method = extraout_x1;
  }
  pNVar6 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)__this,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12411/*"Stick.Init - incorrectly cleared _instance"*/,(MethodInfo *)0x0);
    }
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields,__this);
  if (DAT_04565f34 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f34 = '\x01';
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField = false
  ;
  pUVar2 = (__this->fields)._extensionZone;
  if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar12 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._extensionZone;
    (__this->fields).KHMNGINLJJG.fields.x = UVar12.fields.x;
    (__this->fields).KHMNGINLJJG.fields.y = UVar12.fields.y;
    (__this->fields).KHMNGINLJJG.fields.z = UVar12.fields.z;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (0,0,0,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        fVar10 = *(float *)((long)&pIVar3[2].monitor + 4);
        if ((DAT_04565f26 & 1) == 0) {
          FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
          DAT_04565f26 = 1;
        }
        if (fVar10 < 0.9) {
          fVar10 = 0.9;
        }
        Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA = fVar10;
        fVar10 = *(float *)((long)&pIVar3[2].klass + 4);
        fVar9 = 90.0 - fVar10;
        fVar10 = (fVar10 * 3.1415927) / 180.0;
        (__this->fields).POPGDHFBMGG = fVar9;
        (__this->fields).MAHPPCLAKLP = fVar10;
        fVar9 = (fVar9 * 3.1415927) / 180.0;
        (__this->fields).PPNPFHAJCMF = fVar9;
        sincosf(fVar10 * 0.5,&fStack_44,&local_48);
        (__this->fields).ADFFHMIGKMD = local_48;
        (__this->fields).EJBINLNPDJN = fStack_44;
        fVar10 = tanf(fVar9);
        (__this->fields).JMBOIACABNF = fVar10;
        Nekki_SF2_Core_Fights_Controls_Stick__EENKMFJAMNL(__this,method_00);
        pUVar2 = (__this->fields)._selectedTexture;
        if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
           (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pUVar2,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar11 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
          fVar9 = UVar11.fields.m_Width * 0.5;
          fVar10 = fVar9 * 0.5;
          (__this->fields).KDNCFIDDAKC = fVar9 * fVar9;
          (__this->fields).DANNCCNEPKF = fVar9;
          (__this->fields).EHKCCCMFBDL = fVar9;
          (__this->fields).FGKJMFGPODB = fVar10;
          (__this->fields).JFCALENOAKP = fVar10 * fVar10;
          pUVar2 = (__this->fields)._selectedTexture;
          fVar9 = fVar9 * *(float *)&pIVar3[2].monitor;
          uVar8 = (ulong)(uint)(fVar9 * fVar9);
          (__this->fields).KPEIOMADOJN = fVar9;
          (__this->fields).HAEFCMAPGCO = fVar9 * fVar9;
          if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            method_01 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,method_01);
            pUVar2 = (__this->fields)._flashing;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pUVar2 = (__this->fields)._flashing;
            if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
              uVar7 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                                (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
              pUVar5 = (__this->fields)._flashing;
              if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
                pUVar5 = (__this->fields)._flashing;
                if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                  (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                            (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
                  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                            (uVar7,uVar8,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
                  pUVar2 = (__this->fields)._flashing;
                  if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive
                              (pUVar4,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
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


// ===== public void OnDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x306958C]
// Nekki.SF2.Core.Fights.Controls.Stick$$OnDrag @ RVA 0x306958C

void Nekki_SF2_Core_Fights_Controls_Stick__OnDrag
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  int OOJKNECICBP;
  bool bVar1;
  int32_t OOJKNECICBP_00;
  System_Collections_Generic_List_int__o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  System_Collections_Generic_Dictionary_int__Vector2__o *pSVar2;
  OIIEGNHALFL_o *pOVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_GGFFOJJGHGP__o *pSVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_Fields local_48;
  
  if ((DAT_04565f1a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04565f1a = 1;
  }
  local_48.x = 0.0;
  local_48.y = 0.0;
  if ((OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) &&
     (__this_00 = (__this->fields).PJPCLCHFCEE,
     __this_00 != (System_Collections_Generic_List_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<int>__Contains
                      (__this_00,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                       Method_System_Collections_Generic_List<int>_Contains__);
    if (!bVar1) {
      return;
    }
    rect = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
    UVar5 = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)UVar5,cam,(UnityEngine_Vector2_o *)&local_48,
               (MethodInfo *)0x0);
    pSVar2 = (__this->fields).DOPAABMBANO;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      method_02 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__;
      bVar1 = System_Collections_Generic_Dictionary<int,_Vector2>__ContainsKey
                        (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                         (MethodInfo_23009E4 *)
                         Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__);
      if (bVar1) {
        pSVar2 = (__this->fields).DOPAABMBANO;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0)
        goto LAB_031697a8;
        method_02 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__;
        UVar6 = System_Collections_Generic_Dictionary<int,_Vector2>__get_Item
                          (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                           (MethodInfo_2300720 *)
                           Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__);
        UVar5.x = local_48.x - UVar6.fields.x;
        UVar5.y = local_48.y - UVar6.fields.y;
        local_48 = UVar5;
      }
      Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,true,method_02);
      Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
                (__this,(UnityEngine_Vector2_o)local_48,method_00);
      OOJKNECICBP_00 =
           Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                     (__this,(UnityEngine_Vector2_o)local_48,method_01);
      OOJKNECICBP = (__this->fields).HEMCGGBCBKH;
      if (OOJKNECICBP != OOJKNECICBP_00) {
        pSVar4 = (__this->fields).JANHEDHPGEG;
        pOVar3 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
        OIIEGNHALFL___ctor(pOVar3,OOJKNECICBP,(MethodInfo *)0x0);
        if (pSVar4 == (System_Action_GGFFOJJGHGP__o *)0x0) goto LAB_031697a8;
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,pOVar3,
                   (pSVar4->fields).super.super.method);
      }
      (__this->fields).HEMCGGBCBKH = OOJKNECICBP_00;
      pSVar4 = (__this->fields).IIKCIHLOPKJ;
      pOVar3 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
      OIIEGNHALFL___ctor(pOVar3,OOJKNECICBP_00,(MethodInfo *)0x0);
      if (pSVar4 != (System_Action_GGFFOJJGHGP__o *)0x0) {
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,pOVar3,
                   (pSVar4->fields).super.super.method);
        return;
      }
    }
  }
LAB_031697a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetJoystickRadius(float CJNHFNHJHPE)  [RVA 0x3069568]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetJoystickRadius @ RVA 0x3069568

void Nekki_SF2_Core_Fights_Controls_Stick__SetJoystickRadius
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EHKCCCMFBDL = CJNHFNHJHPE;
  (__this->fields).KDNCFIDDAKC = CJNHFNHJHPE * CJNHFNHJHPE;
  return;
}


// ===== public void remove_OnStickChange(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x30699C4]
// Nekki.SF2.Core.Fights.Controls.Stick$$remove_OnStickChange @ RVA 0x30699C4

void Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickChange
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04565f1b & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f1b = 1;
  }
  ppSVar6 = &(__this->fields).IIKCIHLOPKJ;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void MCOFHDGMOBP(Vector2 FEDEPKJBDDM)  [RVA 0x30697AC]
// Nekki.SF2.Core.Fights.Controls.Stick$$MCOFHDGMOBP @ RVA 0x30697AC

void Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,UnityEngine_Vector2_o FEDEPKJBDDM,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  ulong uVar2;
  
  fVar3 = FEDEPKJBDDM.fields.y;
  fVar1 = FEDEPKJBDDM.fields.x;
  uVar2 = (ulong)FEDEPKJBDDM.fields & 0xffffffff;
  fVar4 = (__this->fields).DANNCCNEPKF;
  if (DAT_04565f35 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565f35 = '\x01';
    method = extraout_x1;
  }
  fVar5 = fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar4 * fVar4 < fVar5) {
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo,method);
    }
    fVar5 = SQRT(fVar5);
    uVar2 = (ulong)(uint)((fVar1 / fVar5) * fVar4);
    fVar3 = (fVar3 / fVar5) * fVar4;
  }
  __this_00 = (__this->fields)._selectedController;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.x = (undefined4)uVar2;
    value.fields.y = fVar3;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnPointerDown(PointerEventData OHNNFPGGEFK)  [RVA 0x3069A74]
// Nekki.SF2.Core.Fights.Controls.Stick$$OnPointerDown @ RVA 0x3069A74

void Nekki_SF2_Core_Fights_Controls_Stick__OnPointerDown
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  uint item;
  uint uVar1;
  UnityEngine_Vector2_Fields screenPoint;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  System_Collections_Generic_Dictionary_int__Vector2__o *pSVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  OIIEGNHALFL_o *__this_00;
  MethodInfo *pMVar9;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Int32_array *pSVar10;
  System_Action_GGFFOJJGHGP__o *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o FEDEPKJBDDM;
  UnityEngine_Vector2_Fields local_28;
  
  if ((DAT_04565f1c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f1c = 1;
  }
  local_28.x = 0.0;
  local_28.y = 0.0;
  rect = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__GetComponent<object>
                   ((UnityEngine_Component_o *)__this,
                    Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_28,
               (MethodInfo *)0x0);
    pSVar5 = (__this->fields).DOPAABMBANO;
    if (pSVar5 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      fVar12 = local_28.x;
      fVar14 = local_28.y;
      fVar13 = (__this->fields).KDNCFIDDAKC;
      fVar15 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA;
      System_Collections_Generic_Dictionary<int,_Vector2>__Remove
                (pSVar5,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                 Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
      pSVar6 = (__this->fields).PJPCLCHFCEE;
      if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
        fVar12 = fVar12 * fVar12 + fVar14 * fVar14;
        System_Collections_Generic_List<int>__Remove
                  (pSVar6,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                   Method_System_Collections_Generic_List<int>_Remove__);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (fVar13 * fVar15 * fVar15 < fVar12) {
          return;
        }
        pSVar6 = (__this->fields).PJPCLCHFCEE;
        if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
          item = (OHNNFPGGEFK->fields)._pointerId_k__BackingField;
          pMVar9 = (MethodInfo *)(ulong)item;
          pSVar10 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pSVar10 != (System_Int32_array *)0x0) {
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar10->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar10->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pMVar9 = extraout_x1;
            }
            if (fVar12 <= (__this->fields).HAEFCMAPGCO) {
              pSVar5 = (__this->fields).DOPAABMBANO;
              if (pSVar5 == (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0)
              goto LAB_03169dd0;
              System_Collections_Generic_Dictionary<int,_Vector2>__Add
                        (pSVar5,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                         (UnityEngine_Vector2_o)local_28,
                         Method_System_Collections_Generic_Dictionary<int,_Vector2>_Add__);
              (__this->fields).HEMCGGBCBKH = 0;
              pMVar9 = extraout_x1_01;
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
                pMVar9 = extraout_x1_02;
              }
              fVar12 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              fVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
            }
            else {
              fVar12 = local_28.x;
              fVar14 = local_28.y;
              iVar4 = Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                                (__this,(UnityEngine_Vector2_o)local_28,pMVar9);
              (__this->fields).HEMCGGBCBKH = iVar4;
              pMVar9 = extraout_x1_00;
            }
            FEDEPKJBDDM.fields.y = fVar14;
            FEDEPKJBDDM.fields.x = fVar12;
            Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP(__this,FEDEPKJBDDM,pMVar9);
            pUVar7 = (__this->fields)._normalTexture;
            if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
              pUVar7 = (__this->fields)._selectedTexture;
              if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                pMVar9 = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
                pUVar7 = (__this->fields)._flashing;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Implicit
                                  ((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
                if (bVar3) {
                  pUVar7 = (__this->fields)._flashing;
                  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
                     (pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03169dd0;
                  pMVar9 = (MethodInfo *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                }
                Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,true,pMVar9);
                pSVar11 = (__this->fields).LMIKGNKODAL;
                iVar4 = (__this->fields).HEMCGGBCBKH;
                __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
                OIIEGNHALFL___ctor(__this_00,iVar4,(MethodInfo *)0x0);
                if (pSVar11 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                  (*(code *)(pSVar11->fields).super.super.invoke_impl)
                            ((pSVar11->fields).super.super.method_code,__this_00,
                             (pSVar11->fields).super.super.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03169dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetOpacityCounter(int CJNHFNHJHPE)  [RVA 0x3069DD4]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetOpacityCounter @ RVA 0x3069DD4

void Nekki_SF2_Core_Fights_Controls_Stick__SetOpacityCounter
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).PDGNMHLGFJC = CJNHFNHJHPE;
  return;
}


// ===== private DMMJFKCBHEK OKLGCJMHEHI(Vector2 EKEMKOCPHPO)  [RVA 0x306986C]
// Nekki.SF2.Core.Fights.Controls.Stick$$OKLGCJMHEHI @ RVA 0x306986C

int32_t Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                  (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,UnityEngine_Vector2_o EKEMKOCPHPO,
                  MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = EKEMKOCPHPO.fields.y;
  fVar7 = EKEMKOCPHPO.fields.x;
  if ((__this->fields).JFCALENOAKP <= fVar7 * fVar7 + fVar4 * fVar4) {
    fVar6 = (__this->fields).ADFFHMIGKMD;
    fVar8 = (__this->fields).EJBINLNPDJN;
    fVar5 = fVar7 * fVar6 + fVar4 * fVar8;
    fVar7 = fVar4 * fVar6 - fVar7 * fVar8;
    if ((fVar5 < 0.0) || (fVar7 < 0.0)) {
      if ((0.0 <= fVar7) || (fVar5 < 0.0)) {
        if ((0.0 <= fVar5) || (0.0 <= fVar7)) {
          if (fVar7 < 0.0 || fVar5 >= 0.0) {
            uVar2 = 0xffffffff;
            fVar7 = 0.0;
            fVar4 = 0.0;
          }
          else {
            fVar4 = ABS(fVar7);
            fVar7 = ABS(fVar5);
            uVar2 = 3;
          }
        }
        else {
          fVar4 = ABS(fVar5);
          fVar7 = ABS(fVar7);
          uVar2 = 2;
        }
      }
      else {
        fVar4 = ABS(fVar7);
        fVar7 = ABS(fVar5);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
      fVar4 = ABS(fVar5);
      fVar7 = ABS(fVar7);
    }
    if (((__this->fields).POPGDHFBMGG == 90.0) || (fVar7 <= fVar4 * (__this->fields).JMBOIACABNF)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    switch(uVar2) {
    case 0:
      iVar3 = 1;
      break;
    case 1:
      iVar3 = 3;
      break;
    case 2:
      iVar3 = 5;
      break;
    case 3:
      iVar3 = 7;
      break;
    default:
      goto switchD_03169984_default;
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
    return iVar3;
  }
switchD_03169984_default:
  return 0;
}


// ===== public void remove_OnStickBegin(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x3069DDC]
// Nekki.SF2.Core.Fights.Controls.Stick$$remove_OnStickBegin @ RVA 0x3069DDC

void Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickBegin
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *source;
  
  if ((DAT_04565f1d & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f1d = 1;
  }
  ppSVar6 = &(__this->fields).LMIKGNKODAL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public List<MGNDHCBAPEN<float, float>> GetQuadrantsAngles()  [RVA 0x3069E8C]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetQuadrantsAngles @ RVA 0x3069E8C

System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *
Nekki_SF2_Core_Fights_Controls_Stick__GetQuadrantsAngles
          (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).FKAHNJIDACB;
}


// ===== public int GetFlashingSpeed()  [RVA 0x3069E94]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetFlashingSpeed @ RVA 0x3069E94

int32_t Nekki_SF2_Core_Fights_Controls_Stick__GetFlashingSpeed
                  (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).FIMMBOGJCFD;
}


// ===== public int GetOpacityCounter()  [RVA 0x3069E9C]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetOpacityCounter @ RVA 0x3069E9C

int32_t Nekki_SF2_Core_Fights_Controls_Stick__GetOpacityCounter
                  (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).PDGNMHLGFJC;
}


// ===== public void OnPointerUp(PointerEventData OHNNFPGGEFK)  [RVA 0x3069EA4]
// Nekki.SF2.Core.Fights.Controls.Stick$$OnPointerUp @ RVA 0x3069EA4

void Nekki_SF2_Core_Fights_Controls_Stick__OnPointerUp
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  int32_t OOJKNECICBP;
  bool bVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__Vector2__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  OIIEGNHALFL_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar3;
  System_Action_GGFFOJJGHGP__o *pSVar4;
  
  if ((DAT_04565f1e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f1e = 1;
  }
  if ((OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) &&
     (pSVar2 = (__this->fields).PJPCLCHFCEE, pSVar2 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    System_Collections_Generic_List<int>__Remove
              (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
               Method_System_Collections_Generic_List<int>_Remove__);
    __this_00 = (__this->fields).DOPAABMBANO;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      method_00 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__;
      System_Collections_Generic_Dictionary<int,_Vector2>__Remove
                (__this_00,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                 (MethodInfo_2301C28 *)
                 Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
      pSVar2 = (__this->fields).PJPCLCHFCEE;
      if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
        if ((pSVar2->fields)._size < 1) {
          Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,method_00);
        }
        pUVar3 = (__this->fields)._flashing;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = (__this->fields)._flashing;
          if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0316a008;
          UnityEngine_GameObject__SetActive
                    (__this_01,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields).JANHEDHPGEG;
        OOJKNECICBP = (__this->fields).HEMCGGBCBKH;
        __this_02 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
        OIIEGNHALFL___ctor(__this_02,OOJKNECICBP,(MethodInfo *)0x0);
        if (pSVar4 != (System_Action_GGFFOJJGHGP__o *)0x0) {
          (*(code *)(pSVar4->fields).super.super.invoke_impl)
                    ((pSVar4->fields).super.super.method_code,__this_02,
                     (pSVar4->fields).super.super.method);
          (__this->fields).HEMCGGBCBKH = 0;
          return;
        }
      }
    }
  }
LAB_0316a008:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetFlashingSpeed(int CJNHFNHJHPE)  [RVA 0x306A00C]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetFlashingSpeed @ RVA 0x306A00C

void Nekki_SF2_Core_Fights_Controls_Stick__SetFlashingSpeed
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).FIMMBOGJCFD = CJNHFNHJHPE;
  return;
}


// ===== public void SetIsFlashing(bool CJNHFNHJHPE)  [RVA 0x306A014]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetIsFlashing @ RVA 0x306A014

void Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((DAT_04565f1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f1f = 1;
  }
  if ((__this->fields).IEFGAHDEMCC != CJNHFNHJHPE) {
    (__this->fields).IEFGAHDEMCC = CJNHFNHJHPE;
    pUVar2 = (__this->fields)._flashing;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._flashing;
      if ((pUVar2 == (UnityEngine_UI_Image_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    (__this->fields).PDGNMHLGFJC = 0;
    (__this->fields).GOINPGAFMAJ = true;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x306A0CC]
// Nekki.SF2.Core.Fights.Controls.Stick$$.ctor @ RVA 0x306A0CC

void Nekki_SF2_Core_Fights_Controls_Stick___ctor
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_float__float___o **ppSVar2;
  System_Collections_Generic_Dictionary_int__Vector2__o *__this_01;
  System_Collections_Generic_Dictionary_int__Vector2__o **ppSVar3;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_List_int__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  
  if ((DAT_04565f20 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_Vector2>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Stick_<>c_GLHFFLJDOMH__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Stick_<>c_JILJAMPGEBI__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Stick_<>c_OKIHPIMCCPH__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo);
    DAT_04565f20 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_0;
  if (pSVar5 == (System_Action_GGFFOJJGHGP__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo,method);
    }
                    /* try { // try from 0316a1b8 to 0326a2c7 has its CatchHandler @ 0316a1b8
                       catch() { ... } // from try @ 0316a1b8 with catch @ 0316a1b8
                       catch() { ... } // from try @ 0316a300 with catch @ 0316a1b8
                       catch() { ... } // from try @ 0316a38c with catch @ 0316a1b8
                       catch() { ... } // from try @ 0316a39c with catch @ 0316a1b8
                       catch() { ... } // from try @ 0316a430 with catch @ 0316a1b8 */
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
    ppSVar1 = &(__this->fields).LMIKGNKODAL;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_1;
    if (pSVar5 == (System_Action_GGFFOJJGHGP__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_1;
      *ppSVar1 = pSVar5;
      thunk_FUN_01c20e04(ppSVar1,pSVar5);
    }
    ppSVar1 = &(__this->fields).IIKCIHLOPKJ;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0316a2c8 to 0326a2df has its CatchHandler @ 0316a3a4 */
    pSVar5 = Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_2;
    if (pSVar5 == (System_Action_GGFFOJJGHGP__o *)0x0) {
                    /* try { // try from 0316a2ec to 0326a2ff has its CatchHandler @ 0316a39c */
      if ((Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0316a300 to 0326a387 has its CatchHandler @ 0316a1b8 */
      pSVar5 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_Stick_<>c_TypeInfo->static_fields->__9__75_2;
      *ppSVar1 = pSVar5;
      thunk_FUN_01c20e04(ppSVar1,pSVar5);
    }
    ppSVar1 = &(__this->fields).JANHEDHPGEG;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
    (__this->fields).FIMMBOGJCFD = 10;
    __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>__ctor__);
    ppSVar2 = &(__this->fields).FKAHNJIDACB;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    __this_01 = (System_Collections_Generic_Dictionary_int__Vector2__o *)
                thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_Vector2>_TypeInfo);
                    /* try { // try from 0316a388 to 0326a38b has its CatchHandler @ 0316a3a0 */
                    /* try { // try from 0316a38c to 0326a397 has its CatchHandler @ 0316a1b8 */
    System_Collections_Generic_Dictionary<int,_Vector2>___ctor
              (__this_01,Method_System_Collections_Generic_Dictionary<int,_Vector2>__ctor__);
    ppSVar3 = &(__this->fields).DOPAABMBANO;
                    /* try { // try from 0316a398 to 0326a39b has its CatchHandler @ 0316a3a4 */
    *ppSVar3 = __this_01;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316a2ec with catch @ 0316a39c
                       try { // try from 0316a39c to 0326a3bb has its CatchHandler @ 0316a1b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316a388 with catch @ 0316a3a0
                        */
    thunk_FUN_01c20e04(ppSVar3,__this_01);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316a2c8 with catch @ 0316a3a4
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0316a398 with catch @ 0316a3a4
                        */
    __this_02 = (System_Collections_Generic_List_int__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (__this_02,Method_System_Collections_Generic_List<int>__ctor__);
    ppSVar4 = &(__this->fields).PJPCLCHFCEE;
                    /* try { // try from 0316a3bc to 0326a3bf has its CatchHandler @ 0316a3d0 */
    *ppSVar4 = __this_02;
    thunk_FUN_01c20e04(ppSVar4,__this_02);
                    /* catch() { ... } // from try @ 0316a3bc with catch @ 0316a3d0 */
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnStickEnd(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x306A3F0]
// Nekki.SF2.Core.Fights.Controls.Stick$$add_OnStickEnd @ RVA 0x306A3F0

void Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickEnd
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
                    /* try { // try from 0316a408 to 0326a42f has its CatchHandler @ 0316a444 */
  if ((DAT_04565f21 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f21 = 1;
  }
  ppSVar6 = &(__this->fields).JANHEDHPGEG;
                    /* try { // try from 0316a430 to 0326a43b has its CatchHandler @ 0316a1b8 */
  a = *ppSVar6;
  do {
                    /* try { // try from 0316a43c to 0326a443 has its CatchHandler @ 0316a444 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316a408 with catch @ 0316a444
                       catch(type#2 @ 00000000) { ... } // from try @ 0316a43c with catch @ 0316a444
                        */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public float GetJoystickRadius()  [RVA 0x306A4A0]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetJoystickRadius @ RVA 0x306A4A0

float Nekki_SF2_Core_Fights_Controls_Stick__GetJoystickRadius
                (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).EHKCCCMFBDL;
}


// ===== private void EENKMFJAMNL()  [RVA 0x30693B4]
// Nekki.SF2.Core.Fights.Controls.Stick$$EENKMFJAMNL @ RVA 0x30693B4

void Nekki_SF2_Core_Fights_Controls_Stick__EENKMFJAMNL
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  MGNDHCBAPEN_float__float__o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *pSVar4;
  MGNDHCBAPEN_float__float__array *pMVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float NANHIJPKIAP;
  
  if ((DAT_04565f22 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_get_Item__);
    FUN_01bab630(&Method_MGNDHCBAPEN<float,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<float,_float>_TypeInfo);
    DAT_04565f22 = 1;
  }
  pSVar4 = (__this->fields).FKAHNJIDACB;
  if (pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) {
    fVar9 = (__this->fields).MAHPPCLAKLP;
    fVar7 = (__this->fields).PPNPFHAJCMF;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    uVar6 = 0;
    do {
      NANHIJPKIAP = fVar9 + fVar9 * 0.5 + fVar7;
      if (uVar6 == 0) {
LAB_031694ac:
        fVar8 = (__this->fields).PPNPFHAJCMF;
      }
      else {
        pSVar4 = (__this->fields).FKAHNJIDACB;
        if ((pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,uVar6 - 1,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_get_Item__
                               ), pIVar3 == (Il2CppObject *)0x0)) break;
        NANHIJPKIAP = *(float *)((long)&pIVar3[1].klass + 4);
        if ((uVar6 & 1) == 0) goto LAB_031694ac;
        fVar8 = (__this->fields).MAHPPCLAKLP;
      }
      __this_00 = (MGNDHCBAPEN_float__float__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<float,_float>_TypeInfo);
      MGNDHCBAPEN<float,_float>___ctor
                (__this_00,NANHIJPKIAP,NANHIJPKIAP + fVar8,Method_MGNDHCBAPEN<float,_float>__ctor__)
      ;
      lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Add__;
      pSVar4 = (__this->fields).FKAHNJIDACB;
      if (pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) break;
      pMVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pMVar5 == (MGNDHCBAPEN_float__float__array *)0x0) break;
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pMVar5->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pMVar5->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar5->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = uVar6 + 1;
      if (uVar6 == 8) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSafeRadius(float CJNHFNHJHPE)  [RVA 0x3069574]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetSafeRadius @ RVA 0x3069574

void Nekki_SF2_Core_Fights_Controls_Stick__SetSafeRadius
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FGKJMFGPODB = CJNHFNHJHPE;
  (__this->fields).JFCALENOAKP = CJNHFNHJHPE * CJNHFNHJHPE;
  return;
}


// ===== public void add_OnStickChange(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x306A4A8]
// Nekki.SF2.Core.Fights.Controls.Stick$$add_OnStickChange @ RVA 0x306A4A8

void Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickChange
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
  if ((DAT_04565f23 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f23 = 1;
  }
  ppSVar6 = &(__this->fields).IIKCIHLOPKJ;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ReleaseInput()  [RVA 0x306A558]
// Nekki.SF2.Core.Fights.Controls.Stick$$ReleaseInput @ RVA 0x306A558

void Nekki_SF2_Core_Fights_Controls_Stick__ReleaseInput
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__Vector2__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_int__o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  
  if ((DAT_04565f24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f24 = 1;
  }
  __this_00 = (__this->fields).DOPAABMBANO;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_Vector2>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_Vector2>_Clear__);
    pSVar2 = (__this->fields).PJPCLCHFCEE;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      (__this->fields).HEMCGGBCBKH = 0;
      method_00 = extraout_x1;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
                (__this,(UnityEngine_Vector2_o)
                        (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,method_00);
      Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,in_x2);
      pUVar3 = (__this->fields)._flashing;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._flashing;
      if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetStopRadius()  [RVA 0x306A67C]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetStopRadius @ RVA 0x306A67C

float Nekki_SF2_Core_Fights_Controls_Stick__GetStopRadius
                (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).DANNCCNEPKF;
}


// ===== public void add_OnStickBegin(Action<GGFFOJJGHGP> CJNHFNHJHPE)  [RVA 0x306A684]
// Nekki.SF2.Core.Fights.Controls.Stick$$add_OnStickBegin @ RVA 0x306A684

void Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickBegin
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
  if ((DAT_04565f25 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f25 = 1;
  }
  ppSVar6 = &(__this->fields).LMIKGNKODAL;
                    /* try { // try from 0316a6c4 to 0326a7db has its CatchHandler @ 0316a6c4
                       catch() { ... } // from try @ 0316a6c4 with catch @ 0316a6c4
                       catch() { ... } // from try @ 0316a7ec with catch @ 0316a6c4
                       catch() { ... } // from try @ 0316a908 with catch @ 0316a6c4 */
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static float SetTouchZoneExtensionFactor(float CJNHFNHJHPE)  [RVA 0x3069348]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetTouchZoneExtensionFactor @ RVA 0x3069348

/* WARNING: Removing unreachable block (ram,0x0316939c) */

float Nekki_SF2_Core_Fights_Controls_Stick__SetTouchZoneExtensionFactor
                (float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04565f26 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f26 = 1;
  }
  if (CJNHFNHJHPE < 0.9) {
    CJNHFNHJHPE = 0.9;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA = CJNHFNHJHPE;
  return CJNHFNHJHPE;
}


// ===== public void SetMovementRadius(float CJNHFNHJHPE)  [RVA 0x3069580]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetMovementRadius @ RVA 0x3069580

void Nekki_SF2_Core_Fights_Controls_Stick__SetMovementRadius
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KPEIOMADOJN = CJNHFNHJHPE;
  (__this->fields).HAEFCMAPGCO = CJNHFNHJHPE * CJNHFNHJHPE;
  return;
}


// ===== private void OnDestroy()  [RVA 0x306A734]
// Nekki.SF2.Core.Fights.Controls.Stick$$OnDestroy @ RVA 0x306A734

void Nekki_SF2_Core_Fights_Controls_Stick__OnDestroy
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  if ((DAT_04565f27 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f27 = 1;
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields,0);
  return;
}


// ===== public bool GetIsFlashing()  [RVA 0x306A788]
// Nekki.SF2.Core.Fights.Controls.Stick$$GetIsFlashing @ RVA 0x306A788

bool Nekki_SF2_Core_Fights_Controls_Stick__GetIsFlashing
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  return (__this->fields).IEFGAHDEMCC;
}


// ===== public void SetIsRising(bool CJNHFNHJHPE)  [RVA 0x306A790]
// Nekki.SF2.Core.Fights.Controls.Stick$$SetIsRising @ RVA 0x306A790

void Nekki_SF2_Core_Fights_Controls_Stick__SetIsRising
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GOINPGAFMAJ = CJNHFNHJHPE;
  return;
}

