// TypeDefIndex 1138
// Namespace: Nekki.SF2.GUI.Dialogs
// public class NotificationsGame : MonoBehaviour, HAFLPBGEGCI
// Fields:
//   private Action DKPPMJCLNAB; // 0x20
//   private const float FOMBMCHPBEG = 0.5;
//   private const float DHIGEMBEOIM = 1.86;
//   private static int DHLNILFLNKE; // 0x0
//   private bool BDDIHIFJADE; // 0x28
//   private bool KHHFEDEDJID; // 0x29
//   private bool ONFGAANLDKH; // 0x2A
//   private bool OLBPOBHFADF; // 0x2B
//   private MenuScroll _scroll; // 0x30
//   private ResolutionImageAvatar _image; // 0x38
//   private RectTransform _clanLogoMountRoot; // 0x40
//   private LabelAlias _label; // 0x48
//   private LabelButton _button; // 0x50
//   private GameObject _inputBlocker; // 0x58
//   private RectTransform _renderRoot; // 0x60
//   private List<RectTransform> KGJOFOAOICJ; // 0x68
//   private string FDLMOCMIBDJ; // 0x70
//   private string PMHMOJGEAAN; // 0x78
//   private string HLOPBFJEDLK; // 0x80
//   private LabelButton.MANJLBPDELA HFJAAPFLDEO; // 0x88
//   private float HPMBLBOJPPB; // 0x8C
//   private NotificationsGame.KIEONODEFGA JDNKKGPNHPB; // 0x90
//   private bool HELEHEHDHMO; // 0x94
//   private List<NBLEEDEAPHB> NMBDHGCKNII; // 0x98
//   private Action<object> BLNMHHKCCOD; // 0xA0
//   private IEnumerator NKCJILMGJKB; // 0xA8
//   private IEnumerator HACGEOMMIFI; // 0xB0
//   private ClanLogoImage FDOKACGMDHB; // 0xB8
//   private float EBAEBONPCMI; // 0xC0
//   private string CNMMJHJNNAJ; // 0xC8
//   private static bool <AFMLJPEEJGB>k__BackingField; // 0x4
//   private static NotificationsGame CBDMFFMCJBK; // 0x8

// ===== public static void set_DisableButtons(bool CJNHFNHJHPE)  [RVA 0x30F6694]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$set_DisableButtons @ RVA 0x30F6694

void Nekki_SF2_GUI_Dialogs_NotificationsGame__set_DisableButtons
               (bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566461 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    DAT_04566461 = 1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->_AFMLJPEEJGB_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== private void GKFNLJGEFOE(bool OPCNIHNILAF)  [RVA 0x30F66E4]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GKFNLJGEFOE @ RVA 0x30F66E4

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GKFNLJGEFOE
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool OPCNIHNILAF,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  (__this->fields).BDDIHIFJADE = OPCNIHNILAF;
  if (!OPCNIHNILAF) {
    __this_00 = (__this->fields)._renderRoot;
    if ((__this_00 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    if ((__this->fields).ONFGAANLDKH == false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG
                (__this,(__this->fields).OLBPOBHFADF,method_00);
    }
    (__this->fields).OLBPOBHFADF = false;
  }
  return;
}


// ===== private void Update()  [RVA 0x30F67CC]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$Update @ RVA 0x30F67CC

void Nekki_SF2_GUI_Dialogs_NotificationsGame__Update
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar3;
  
  if ((__this->fields).KHHFEDEDJID != false) {
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (((pNVar3->fields).KDBFJLCCJHC != false) &&
       ((bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar1 ||
        (iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2)))) {
      method_00 = (MethodInfo *)0x0;
      bVar1 = HPHIGFJMKAC__JMHANNNMOEA
                        ((System_Collections_Generic_IEnumerable_RectTransform__o *)
                         (__this->fields).KGJOFOAOICJ,true,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,false,method_00);
        return;
      }
    }
  }
  return;
}


// ===== public static NotificationsGame get_Instance()  [RVA 0x30F6840]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_Instance @ RVA 0x30F6840

Nekki_SF2_GUI_Dialogs_NotificationsGame_o *
Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar4;
  
  if ((DAT_04566462 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<NotificationsGame>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10402/*"Prefabs/Dialogs/NotificationGame"*/);
    FUN_01bab630(&StringLiteral_15559/*"[NotificationsGame]"*/);
    DAT_04566462 = 1;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031f69a0:
    return Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  pUVar2 = UnityEngine_Resources__Load(StringLiteral_10402/*"Prefabs/Dialogs/NotificationGame"*/,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar2);
    }
    UnityEngine_Object__set_name(pUVar2,StringLiteral_15559/*"[NotificationsGame]"*/,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<NotificationsGame>__);
    ppNVar3 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    *ppNVar3 = pNVar4;
    thunk_FUN_01c20e04(ppNVar3,pNVar4);
    pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar4 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__GIENGNEGHPJ(pNVar4,method_00);
      UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
      goto LAB_031f69a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFLEKGKEMDG(bool CJNHFNHJHPE)  [RVA 0x30F673C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LFLEKGKEMDG @ RVA 0x30F673C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_object__o **ppSVar2;
  System_Action_object__o *pSVar3;
  uint local_24;
  
  if ((DAT_04566463 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566463 = 1;
  }
  ppSVar2 = &(__this->fields).BLNMHHKCCOD;
  pSVar3 = *ppSVar2;
  if (pSVar3 != (System_Action_object__o *)0x0) {
    *ppSVar2 = (System_Action_object__o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    local_24 = (uint)CJNHFNHJHPE;
    uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,uVar1,(pSVar3->fields).super.super.method);
  }
  return;
}


// ===== private bool LCDOGLFNFJM()  [RVA 0x30F6C1C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LCDOGLFNFJM @ RVA 0x30F6C1C

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__LCDOGLFNFJM
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *__this_00;
  long lVar3;
  void *pvVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566464 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04566464 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NDPMLPGANCI_o *)0x0) {
LAB_031f6d14:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
  bVar1 = false;
  if ((iVar2 != 0) && (iVar2 != 10)) {
    if (iVar2 == 6) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto LAB_031f6d14;
        if (((x[6].klass != (UnityEngine_Object_c *)0x0) &&
            (pvVar4 = ((x[6].klass)->_1).this_arg.data, pvVar4 != (void *)0x0)) &&
           (*(int *)((long)pvVar4 + 0x18) != 0)) {
          return false;
        }
      }
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== private void GJBIHHLINEG()  [RVA 0x30F6D18]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GJBIHHLINEG @ RVA 0x30F6D18

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04566465 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566465 = 1;
    method = extraout_x1;
  }
  JNPCENEINON = (__this->fields)._renderRoot;
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  return;
}


// ===== public bool get_IsOpen()  [RVA 0x30F6D74]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_IsOpen @ RVA 0x30F6D74

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__get_IsOpen
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  return (__this->fields).BDDIHIFJADE;
}


// ===== private IEnumerator CCLJHFJCFJI()  [RVA 0x30F6D7C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$CCLJHFJCFJI @ RVA 0x30F6D7C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_NotificationsGame__CCLJHFJCFJI
          (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566466 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_TypeInfo);
    DAT_04566466 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_TypeInfo,method
                                );
  Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CreateClanLogoImage(OJEHKJHEBID PBNPKBJKFHE, bool KLJCGIAILPD, float JKOJPEKLBCI = 3)  [RVA 0x30F6DF0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$CreateClanLogoImage @ RVA 0x30F6DF0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               bool KLJCGIAILPD,float JKOJPEKLBCI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_01;
  ClanLogoImage_o **ppCVar3;
  ClanLogoImage_o *pCVar4;
  
  if ((DAT_04566467 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566467 = 1;
  }
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._clanLogoMountRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      ppCVar3 = &(__this->fields).FDOKACGMDHB;
      pCVar4 = *ppCVar3;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects
                  ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,(MethodInfo *)0x0)
        ;
        pCVar4 = KFCFGKEHPNK__LEIGOOFFFPE
                           ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,
                            PBNPKBJKFHE,KLJCGIAILPD,JKOJPEKLBCI,(MethodInfo *)0x0);
        (__this->fields).FDOKACGMDHB = pCVar4;
        thunk_FUN_01c20e04(ppCVar3,pCVar4);
        return;
      }
      KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar3,PBNPKBJKFHE,KLJCGIAILPD,JKOJPEKLBCI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LIJIBDHAMDM()  [RVA 0x30F6F20]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LIJIBDHAMDM @ RVA 0x30F6F20

void Nekki_SF2_GUI_Dialogs_NotificationsGame__LIJIBDHAMDM
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._inputBlocker;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).DKPPMJCLNAB;
      if (pSVar2 != (System_Action_o *)0x0) {
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
        if ((__this->fields).ONFGAANLDKH != false) {
          (__this->fields).ONFGAANLDKH = false;
          Nekki_SF2_GUI_Dialogs_NotificationsGame__POIOFMEMHBP(__this,method_00);
          return;
        }
        if ((__this->fields).BLNMHHKCCOD != (System_Action_object__o *)0x0) {
          return;
        }
        __this_01 = (__this->fields)._renderRoot;
        if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnClose(Action CJNHFNHJHPE)  [RVA 0x30F72A8]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$remove_OnClose @ RVA 0x30F72A8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__remove_OnClose
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566468 & 1) == 0) {
                    /* try { // try from 031f72cc to 032f72df has its CatchHandler @ 031f7668 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566468 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  source = *ppSVar4;
                    /* try { // try from 031f72f4 to 032f72f7 has its CatchHandler @ 031f75ec */
                    /* try { // try from 031f72f8 to 032f7303 has its CatchHandler @ 031f7628 */
                    /* try { // try from 031f730c to 032f731b has its CatchHandler @ 031f7658 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* try { // try from 031f7320 to 032f732f has its CatchHandler @ 031f7650 */
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 031f7334 to 032f735f has its CatchHandler @ 031f7648 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void OpenNotification(string CADMJIKLNCN, List<NBLEEDEAPHB> IJIPABLCAKE, Action<object> BLMFLPJJMPF, string LKJLAHNCJNJ, LabelButton.MANJLBPDELA PEMBNLANBGE, float IMLLPKEEAHN = 0, NotificationsGame.KIEONODEFGA ACCIHBHMFPN = 0, bool NDMEIKOGLDG = False, bool PGOENBHBFPF = True, float PFIFJCMHGGB = 1, string OOKEKJMFKPE)  [RVA 0x30F7344]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OpenNotification @ RVA 0x30F7344

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,System_String_o *CADMJIKLNCN,
               System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE,
               System_Action_object__o *BLMFLPJJMPF,System_String_o *LKJLAHNCJNJ,int32_t PEMBNLANBGE
               ,float IMLLPKEEAHN,int32_t ACCIHBHMFPN,bool NDMEIKOGLDG,bool PGOENBHBFPF,
               float PFIFJCMHGGB,System_String_o *OOKEKJMFKPE,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_01;
  System_String_o **ppSVar4;
  System_Action_object__o **ppSVar5;
  System_Collections_Generic_List_NBLEEDEAPHB__o **ppSVar6;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_Collections_IEnumerator_o **ppSVar13;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = CADMJIKLNCN;
  auVar14._0_8_ = __this;
                    /* try { // try from 031f7378 to 032f737f has its CatchHandler @ 031f763c */
                    /* try { // try from 031f7398 to 032f73b7 has its CatchHandler @ 031f7614 */
  method_03 = (MethodInfo *)IJIPABLCAKE;
  if ((DAT_04566469 & 1) == 0) {
    auVar14 = FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566469 = 1;
  }
  bVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame__LCDOGLFNFJM(auVar14._0_8_,auVar14._8_8_);
  Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,false,method_03);
                    /* try { // try from 031f73c4 to 032f73cb has its CatchHandler @ 031f75e8 */
  if (!bVar2) {
                    /* try { // try from 031f7510 to 032f7543 has its CatchHandler @ 031f7204 */
    return;
  }
  __this_00 = (__this->fields)._clanLogoMountRoot;
                    /* try { // try from 031f73d8 to 032f73e3 has its CatchHandler @ 031f761c */
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* try { // try from 031f73e8 to 032f740b has its CatchHandler @ 031f7644 */
    __this_01 = (__this->fields)._image;
    if ((__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
      (__this->fields).OLBPOBHFADF = false;
      (__this->fields).HELEHEHDHMO = NDMEIKOGLDG;
      ppSVar4 = &(__this->fields).HLOPBFJEDLK;
      *ppSVar4 = LKJLAHNCJNJ;
                    /* try { // try from 031f7424 to 032f742b has its CatchHandler @ 031f763c */
      thunk_FUN_01c20e04(ppSVar4,LKJLAHNCJNJ);
      (__this->fields).HFJAAPFLDEO = PEMBNLANBGE;
      ppSVar5 = &(__this->fields).BLNMHHKCCOD;
      *ppSVar5 = BLMFLPJJMPF;
      thunk_FUN_01c20e04(ppSVar5,BLMFLPJJMPF);
      (__this->fields).HPMBLBOJPPB = IMLLPKEEAHN;
      ppSVar4 = &(__this->fields).FDLMOCMIBDJ;
                    /* try { // try from 031f7444 to 032f7463 has its CatchHandler @ 031f7610 */
      *ppSVar4 = CADMJIKLNCN;
      thunk_FUN_01c20e04(ppSVar4,CADMJIKLNCN);
      ppSVar6 = &(__this->fields).NMBDHGCKNII;
      *ppSVar6 = IJIPABLCAKE;
      thunk_FUN_01c20e04(ppSVar6,IJIPABLCAKE);
      ppSVar4 = &(__this->fields).CNMMJHJNNAJ;
      *ppSVar4 = OOKEKJMFKPE;
                    /* try { // try from 031f7470 to 032f7477 has its CatchHandler @ 031f75e4 */
      (__this->fields).EBAEBONPCMI = PFIFJCMHGGB;
      thunk_FUN_01c20e04(ppSVar4,OOKEKJMFKPE);
      pUVar3 = (__this->fields)._inputBlocker;
                    /* try { // try from 031f747c to 032f7487 has its CatchHandler @ 031f7618 */
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031f7494 to 032f74a3 has its CatchHandler @ 031f760c */
        UnityEngine_GameObject__SetActive(pUVar3,PGOENBHBFPF,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_NotificationsGame__POIOFMEMHBP(__this,method_00);
                    /* try { // try from 031f74a4 to 032f74b3 has its CatchHandler @ 031f7608 */
        Nekki_SF2_GUI_Dialogs_NotificationsGame__HAMGAOBNHDF(__this,method_01);
        pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar8 = Nekki_SF2_GUI_Dialogs_NotificationsGame__CCLJHFJCFJI(__this,method_02);
        if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 031f74c4 to 032f74cb has its CatchHandler @ 031f7600 */
          pPVar10 = pPVar7->klass;
          uVar1._0_1_ = (pPVar10->_2).rank;
          uVar1._1_1_ = (pPVar10->_2).minimumAlignment;
                    /* try { // try from 031f74cc to 032f74d3 has its CatchHandler @ 031f75fc */
          uVar11 = (ulong)uVar1;
          if (uVar11 != 0) {
            piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
            do {
                    /* try { // try from 031f74e8 to 032f74f3 has its CatchHandler @ 031f75f4 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar9 = pPVar10->vtable + *piVar12;
                goto LAB_031f7538;
              }
              uVar11 = uVar11 - 1;
                    /* try { // try from 031f74f4 to 032f74ff has its CatchHandler @ 031f75f0 */
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
                    /* try { // try from 031f7504 to 032f750f has its CatchHandler @ 031f75e0 */
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_031f7538:
                    /* try { // try from 031f7544 to 032f754b has its CatchHandler @ 031f763c */
          pSVar8 = (System_Collections_IEnumerator_o *)
                   (*pVVar9->methodPtr)(pPVar7,pSVar8,1,pVVar9->method);
          ppSVar13 = &(__this->fields).NKCJILMGJKB;
                    /* try { // try from 031f754c to 032f75a3 has its CatchHandler @ 031f7204 */
          *ppSVar13 = pSVar8;
          thunk_FUN_01c20e04(ppSVar13,pSVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDJIEEGPABO(bool AOMODHEGMBC)  [RVA 0x30F7654]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$DDJIEEGPABO @ RVA 0x30F7654

void Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool AOMODHEGMBC,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 031f730c with catch @ 031f7658 */
  if ((__this->fields).BDDIHIFJADE != false) {
                    /* catch() { ... } // from try @ 031f72cc with catch @ 031f7668 */
    (__this->fields).OLBPOBHFADF = AOMODHEGMBC;
    Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,AOMODHEGMBC,method);
    Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(__this,false,method);
    return;
  }
  return;
}


// ===== private void GBHBDMMKPLO(List<NBLEEDEAPHB> IJIPABLCAKE)  [RVA 0x30F7778]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GBHBDMMKPLO @ RVA 0x30F7778

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,
               System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE,MethodInfo *method)

{
  int iVar1;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  int index;
  
                    /* catch() { ... } // from try @ 031f7774 with catch @ 031f7784 */
                    /* try { // try from 031f778c to 032f77c7 has its CatchHandler @ 031f77dc */
  if ((DAT_0456646a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 031f77c8 to 032f77d3 has its CatchHandler @ 031f7204 */
    FUN_01bab630(&StringLiteral_15859/*"^{0}^\n"*/);
                    /* try { // try from 031f77d4 to 032f77db has its CatchHandler @ 031f77dc */
    DAT_0456646a = 1;
  }
                    /* catch() { ... } // from try @ 031f7754 with catch @ 031f77dc
                       catch() { ... } // from try @ 031f778c with catch @ 031f77dc
                       catch() { ... } // from try @ 031f77d4 with catch @ 031f77dc */
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar1 = (IJIPABLCAKE->fields)._size;
    if (iVar1 < 1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_031f7894;
    }
    else {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,index,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if ((pIVar2 == (Il2CppObject *)0x0) || (__this_00 == (System_Text_StringBuilder_o *)0x0))
        goto LAB_031f7894;
        System_Text_StringBuilder__AppendFormat
                  (__this_00,StringLiteral_15859/*"^{0}^\n"*/,pIVar2[1].monitor,(MethodInfo *)0x0);
        index = index + 1;
      } while (iVar1 != index);
    }
    pSVar3 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__TrimEnd(pSVar3,10,(MethodInfo *)0x0);
      ppSVar4 = &(__this->fields).PMHMOJGEAAN;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      return;
    }
  }
LAB_031f7894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OHFPFJBPBAD(bool BHIOEPGLFIJ)  [RVA 0x30F7688]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OHFPFJBPBAD @ RVA 0x30F7688

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool BHIOEPGLFIJ,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Menu_MenuScroll_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  MethodInfo *method_00;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  float PNEIGGOFIOA;
  
                    /* try { // try from 031f7690 to 032f76a7 has its CatchHandler @ 031f774c */
  if ((DAT_0456646b & 1) == 0) {
                    /* try { // try from 031f76b0 to 032f76b3 has its CatchHandler @ 031f7740 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_BCGEIDJJAHG__);
                    /* try { // try from 031f76b8 to 032f76c3 has its CatchHandler @ 031f773c */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456646b = 1;
  }
  pLVar2 = (__this->fields)._button;
  if (pLVar2 != (LabelButton_o *)0x0) {
                    /* try { // try from 031f76d0 to 032f76db has its CatchHandler @ 031f7738 */
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
                    /* try { // try from 031f76e0 to 032f76eb has its CatchHandler @ 031f773c */
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 031f76f4 to 032f770f has its CatchHandler @ 031f7744 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
                    /* try { // try from 031f7710 to 032f7723 has its CatchHandler @ 031f7204 */
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      if ((__this->fields).ONFGAANLDKH == false) {
                    /* try { // try from 031f7724 to 032f7733 has its CatchHandler @ 031f774c */
        Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,false,method_00);
      }
      __this_00 = (__this->fields)._scroll;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
                    /* try { // try from 031f7734 to 032f7737 has its CatchHandler @ 031f7744 */
                    /* catch() { ... } // from try @ 031f76d0 with catch @ 031f7738 */
                    /* catch() { ... } // from try @ 031f76b8 with catch @ 031f773c
                       catch() { ... } // from try @ 031f76e0 with catch @ 031f773c */
        PNEIGGOFIOA = 0.0;
        if (!BHIOEPGLFIJ) {
          PNEIGGOFIOA = 0.5;
        }
                    /* catch() { ... } // from try @ 031f76b0 with catch @ 031f7740 */
                    /* catch() { ... } // from try @ 031f76f4 with catch @ 031f7744
                       catch() { ... } // from try @ 031f7734 with catch @ 031f7744 */
        Nekki_SF2_GUI_Menu_MenuScroll__Collapse(__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._inputBlocker;
                    /* catch() { ... } // from try @ 031f7690 with catch @ 031f774c
                       catch() { ... } // from try @ 031f7724 with catch @ 031f774c */
                    /* try { // try from 031f7754 to 032f7757 has its CatchHandler @ 031f77dc */
                    /* try { // try from 031f7758 to 032f7773 has its CatchHandler @ 031f7204 */
        if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031f7774 to 032f7777 has its CatchHandler @ 031f7784 */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ()  [RVA 0x30F69C4]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GIENGNEGHPJ @ RVA 0x30F69C4

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar7;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  UnityEngine_RectTransform_array *pUVar8;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_Object_o *y;
  System_Collections_Generic_List_RectTransform__o *__this_01;
  uint uVar9;
  
  if ((DAT_0456646c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponentsInChildren<Graphic>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GJBIHHLINEG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_0456646c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__NBKJLHGEDLH(__this,method);
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         (pUVar4,true,
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Graphic>__),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar1 = (uint)pSVar5->max_length;
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_00 = (UnityEngine_UI_Graphic_o *)pSVar5->m_Items[(int)uVar9];
        if (__this_00 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_031f6c14;
        uVar6 = (*(__this_00->klass->vtable)._24_get_raycastTarget.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._24_get_raycastTarget.method);
        if ((uVar6 & 1) != 0) {
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          y = (UnityEngine_Object_o *)(__this->fields)._inputBlocker;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
          if (bVar3) {
            __this_01 = (__this->fields).KGJOFOAOICJ;
            pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
            if (__this_01 == (System_Collections_Generic_List_RectTransform__o *)0x0)
            goto LAB_031f6c14;
            pUVar8 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pUVar8 == (UnityEngine_RectTransform_array *)0x0) goto LAB_031f6c14;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pUVar8->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pUVar8->m_Items[(int)uVar1] = pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_NotificationsGame__GJBIHHLINEG(__this,method_01);
    pUVar7 = (__this->fields)._renderRoot;
    if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._inputBlocker;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(method_00);
        return;
      }
    }
  }
LAB_031f6c14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_DisableButtons()  [RVA 0x30F7A78]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_DisableButtons @ RVA 0x30F7A78

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__get_DisableButtons(MethodInfo *method)

{
  if ((DAT_0456646d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
                    /* catch() { ... } // from try @ 031f7a6c with catch @ 031f7aa0 */
    DAT_0456646d = 1;
  }
                    /* try { // try from 031f7ab0 to 032f7ab7 has its CatchHandler @ 031f7acc */
                    /* try { // try from 031f7ab8 to 032f7ac3 has its CatchHandler @ 031f78d4 */
  return Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->
         _AFMLJPEEJGB_k__BackingField;
}


// ===== public static bool get_EscapeClickHidesNotification()  [RVA 0x30F7AC0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_EscapeClickHidesNotification @ RVA 0x30F7AC0

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__get_EscapeClickHidesNotification(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
                    /* try { // try from 031f7ac4 to 032f7acb has its CatchHandler @ 031f7acc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f7ab0 with catch @ 031f7acc
                       catch(type#2 @ 00000000) { ... } // from try @ 031f7ac4 with catch @ 031f7acc
                        */
  if ((DAT_0456646e & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_0456646e = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[7].klass != (Il2CppClass *)0x0)) {
    return (bool)*(undefined1 *)&((pIVar1[7].klass)->_1).name;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NotificationsGame.KIEONODEFGA get_NotificationType()  [RVA 0x30F7B3C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$get_NotificationType @ RVA 0x30F7B3C

int32_t Nekki_SF2_GUI_Dialogs_NotificationsGame__get_NotificationType
                  (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  return (__this->fields).JDNKKGPNHPB;
}


// ===== private void KPAPEICNLGH()  [RVA 0x30F67D0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$KPAPEICNLGH @ RVA 0x30F67D0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__KPAPEICNLGH
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar3;
  
  if ((__this->fields).KHHFEDEDJID != false) {
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (((pNVar3->fields).KDBFJLCCJHC != false) &&
       ((bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar1 ||
        (iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2)))) {
      method_00 = (MethodInfo *)0x0;
      bVar1 = HPHIGFJMKAC__JMHANNNMOEA
                        ((System_Collections_Generic_IEnumerable_RectTransform__o *)
                         (__this->fields).KGJOFOAOICJ,true,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,false,method_00);
        return;
      }
    }
  }
  return;
}


// ===== public void add_OnClose(Action CJNHFNHJHPE)  [RVA 0x30F7B44]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$add_OnClose @ RVA 0x30F7B44

void Nekki_SF2_GUI_Dialogs_NotificationsGame__add_OnClose
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456646f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456646f = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void BCGEIDJJAHG()  [RVA 0x30F7BE0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$BCGEIDJJAHG @ RVA 0x30F7BE0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__BCGEIDJJAHG
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,true,in_x2);
  return;
}


// ===== private void HAMGAOBNHDF()  [RVA 0x30F757C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$HAMGAOBNHDF @ RVA 0x30F757C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__HAMGAOBNHDF
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566470 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 031f75a4 to 032f75af has its CatchHandler @ 031f763c */
    DAT_04566470 = 1;
  }
  ppSVar7 = &(__this->fields).NKCJILMGJKB;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* catch() { ... } // from try @ 031f7494 with catch @ 031f760c */
                    /* catch() { ... } // from try @ 031f7444 with catch @ 031f7610 */
                    /* catch() { ... } // from try @ 031f7398 with catch @ 031f7614 */
    return;
  }
                    /* try { // try from 031f75b0 to 032f75d3 has its CatchHandler @ 031f7204 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f7320 with catch @ 031f7650 */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
                    /* try { // try from 031f75d4 to 032f75d7 has its CatchHandler @ 031f7620 */
                    /* try { // try from 031f75d8 to 032f75db has its CatchHandler @ 031f7604 */
  if (uVar5 != 0) {
                    /* try { // try from 031f75dc to 032f75df has its CatchHandler @ 031f75f8 */
                    /* catch() { ... } // from try @ 031f7504 with catch @ 031f75e0
                       try { // try from 031f75e0 to 032f768f has its CatchHandler @ 031f7204 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 031f7470 with catch @ 031f75e4 */
                    /* catch() { ... } // from try @ 031f73c4 with catch @ 031f75e8 */
                    /* catch() { ... } // from try @ 031f72f4 with catch @ 031f75ec */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 031f747c with catch @ 031f7618 */
                    /* catch() { ... } // from try @ 031f73d8 with catch @ 031f761c */
                    /* catch() { ... } // from try @ 031f75d4 with catch @ 031f7620 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_031f7628;
      }
                    /* catch() { ... } // from try @ 031f74f4 with catch @ 031f75f0 */
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 031f74e8 with catch @ 031f75f4 */
      piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 031f75dc with catch @ 031f75f8 */
    } while (uVar5 != 0);
  }
                    /* catch() { ... } // from try @ 031f74cc with catch @ 031f75fc */
                    /* catch() { ... } // from try @ 031f74c4 with catch @ 031f7600 */
                    /* catch() { ... } // from try @ 031f75d8 with catch @ 031f7604 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 031f74a4 with catch @ 031f7608 */
LAB_031f7628:
                    /* catch() { ... } // from try @ 031f72f8 with catch @ 031f7628 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 031f7378 with catch @ 031f763c
                       catch() { ... } // from try @ 031f7424 with catch @ 031f763c
                       catch() { ... } // from try @ 031f7544 with catch @ 031f763c
                       catch() { ... } // from try @ 031f75a4 with catch @ 031f763c */
                    /* catch() { ... } // from try @ 031f73e8 with catch @ 031f7644 */
                    /* catch() { ... } // from try @ 031f7334 with catch @ 031f7648 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void NBKJLHGEDLH()  [RVA 0x30F7898]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$NBKJLHGEDLH @ RVA 0x30F7898

void Nekki_SF2_GUI_Dialogs_NotificationsGame__NBKJLHGEDLH
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_UI_Button_o *__this_00;
  
  if ((DAT_04566471 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 031f78d4 to 032f799f has its CatchHandler @ 031f78d4
                       catch() { ... } // from try @ 031f78d4 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f79c8 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7a48 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7a70 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7ab8 with catch @ 031f78d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_LIJIBDHAMDM__);
    DAT_04566471 = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Init(pNVar1,0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
      (pNVar1->fields).KFCLIPMOFFN = false;
      Nekki_SF2_GUI_Menu_MenuScroll__Collapse(pNVar1,0.0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuScroll__add_OnChanging(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._scroll;
        CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
          Nekki_SF2_GUI_Menu_MenuScroll__add_OnClose(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 031f79a0 to 032f79a7 has its CatchHandler @ 031f7a54 */
          pNVar1 = (__this->fields)._scroll;
          if ((pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) &&
             (__this_00 = (pNVar1->fields)._wheel, __this_00 != (UnityEngine_UI_Button_o *)0x0)) {
                    /* try { // try from 031f79bc to 032f79c7 has its CatchHandler @ 031f7a4c */
            UnityEngine_UI_Selectable__set_interactable
                      ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031f79c8 to 032f7a43 has its CatchHandler @ 031f78d4 */
  FUN_01bab8c8();
}


// ===== public void ShowDebugNotification(float PNEIGGOFIOA, bool LEJHELDHNIC, int OGPGLGPMEPD)  [RVA 0x30F7BE8]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$ShowDebugNotification @ RVA 0x30F7BE8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__ShowDebugNotification
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,float PNEIGGOFIOA,bool LEJHELDHNIC
               ,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  System_String_o *CADMJIKLNCN;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Threading_CancellationTokenSource_o *pSVar4;
  System_Action_object__o **ppSVar5;
  MethodInfo *method_00;
  NBLEEDEAPHB_array *pNVar6;
  System_Threading_CancellationTokenSource_o **ppSVar7;
  System_Action_object__o *BLMFLPJJMPF;
  MethodInfo *method_01;
  
  if ((DAT_04566472 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_CBHMHHCPPCB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_16974/*"character_sensei_small"*/);
    FUN_01bab630(&StringLiteral_19375/*"lblModels"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566472 = 1;
  }
  IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
  method_01 = (MethodInfo *)0x0;
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  lVar3 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar6 = (IJIPABLCAKE->fields)._items;
    (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
    if (pNVar6 != (NBLEEDEAPHB_array *)0x0) {
      uVar2 = (IJIPABLCAKE->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (IJIPABLCAKE->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   (Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      method_00 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__;
      __this_01 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      pSVar4 = (System_Threading_CancellationTokenSource_o *)
               Nekki_SF2_GUI_Dialogs_NotificationsGame__HILHBNCHAAG(__this_01,OGPGLGPMEPD,method_00)
      ;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        ppSVar7 = &(__this_01->fields).super.m_CancellationTokenSource;
        *ppSVar7 = pSVar4;
        thunk_FUN_01c20e04(ppSVar7,pSVar4);
        if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CADMJIKLNCN = StringLiteral_16974/*"character_sensei_small"*/;
        BLMFLPJJMPF = Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__71_0
        ;
        if (BLMFLPJJMPF == (System_Action_object__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          BLMFLPJJMPF = (System_Action_object__o *)
                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar5 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__71_0;
          *ppSVar5 = BLMFLPJJMPF;
          thunk_FUN_01c20e04(ppSVar5,BLMFLPJJMPF);
        }
        if (__this != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
          puVar1 = &StringLiteral_19375/*"lblModels"*/;
          if (!LEJHELDHNIC) {
            puVar1 = &StringLiteral_1/*""*/;
          }
          Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                    (__this,CADMJIKLNCN,IJIPABLCAKE,BLMFLPJJMPF,(System_String_o *)*puVar1,4,
                     PNEIGGOFIOA,0,false,true,1.0,(System_String_o *)0x0,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CloseNotifications()  [RVA 0x30F7F1C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$CloseNotifications @ RVA 0x30F7F1C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  
  if ((DAT_04566473 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566473 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).BDDIHIFJADE != false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(pNVar2,false,method_00);
      return;
    }
  }
  return;
}


// ===== public void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x30F7FC8]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OnBackKeyClicked @ RVA 0x30F7FC8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_EscapeClickHidesNotification
                    ((MethodInfo *)__this);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,false,method);
    return;
  }
  return;
}


// ===== private void BEDNMMNONLC()  [RVA 0x30F7FF0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$BEDNMMNONLC @ RVA 0x30F7FF0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__BEDNMMNONLC
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Menu_MenuScroll_o *__this_03;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._renderRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      __this_03 = (__this->fields)._scroll;
      if (__this_03 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuScroll__Expand(__this_03,0.5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x30F804C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OnDestroy @ RVA 0x30F804C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OnDestroy
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar3;
  
  if ((DAT_04566474 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_LIJIBDHAMDM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566474 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__remove_UpdateEvent(pSVar1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._scroll;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__remove_OnChanging(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuScroll__remove_OnClose(pNVar3,pSVar1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(method_00);
      __this_00 = (__this->fields)._inputBlocker;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        ppNVar2 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
        *ppNVar2 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0;
        thunk_FUN_01c20e04(ppNVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void POIOFMEMHBP()  [RVA 0x30F6FC8]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$POIOFMEMHBP @ RVA 0x30F6FC8

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_NotificationsGame__POIOFMEMHBP
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_04;
  float fVar5;
  UnityEngine_Vector3_o value;
  System_String_o *local_30;
  float local_24;
  
  if ((DAT_04566475 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_BCGEIDJJAHG__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566475 = 1;
  }
  local_24 = 0.0;
  local_30 = (System_String_o *)0x0;
  if ((__this->fields).BDDIHIFJADE != false) {
    (__this->fields).ONFGAANLDKH = true;
    Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(__this,false,in_x2);
    return;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__GBHBDMMKPLO(__this,(__this->fields).NMBDHGCKNII,in_x2);
  pSVar4 = (__this->fields).FDLMOCMIBDJ;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils__FDEPCEJJGLO(pSVar4,&local_24,&local_30,(MethodInfo *)0x0);
  if ((__this->fields).EBAEBONPCMI != 1.0) {
    pNVar2 = (__this->fields)._image;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_031f72a4;
    fVar5 = (__this->fields).EBAEBONPCMI;
    value.fields.y = fVar5 * 1.86;
    value.fields.x = fVar5 * local_24 * 1.86;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._image;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar2,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._image;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).CNMMJHJNNAJ,(MethodInfo *)0x0);
    if (bVar1) {
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
    }
    else {
      pSVar4 = (__this->fields).CNMMJHJNNAJ;
    }
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier = pSVar4;
      thunk_FUN_01c20e04(&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier);
      pNVar2 = (__this->fields)._image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar2,local_30,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._label;
        if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias
                    (__this_01,(__this->fields).PMHMOJGEAAN,(MethodInfo *)0x0);
          if (DAT_0456647e == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
            DAT_0456647e = '\x01';
          }
          if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->
               _AFMLJPEEJGB_k__BackingField != false) ||
             (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HLOPBFJEDLK,(MethodInfo *)0x0),
             bVar1)) {
            bVar1 = false;
          }
          else {
            bVar1 = (__this->fields).BLNMHHKCCOD != (System_Action_object__o *)0x0;
          }
          pLVar3 = (__this->fields)._button;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_02,bVar1,(MethodInfo *)0x0);
            pLVar3 = (__this->fields)._button;
            if (pLVar3 != (LabelButton_o *)0x0) {
              method_01 = (MethodInfo *)0x0;
              UnityEngine_UI_Selectable__set_interactable
                        ((UnityEngine_UI_Selectable_o *)pLVar3,bVar1,(MethodInfo *)0x0);
              if (!bVar1) {
                method_00 = extraout_x1;
                if ((__this->fields).HELEHEHDHMO == false) {
                  Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,false,method_01);
                  method_00 = extraout_x1_01;
                }
LAB_031f727c:
                Nekki_SF2_GUI_Dialogs_NotificationsGame__BEDNMMNONLC(__this,method_00);
                return;
              }
              pLVar3 = (__this->fields)._button;
              if (pLVar3 != (LabelButton_o *)0x0) {
                LabelButton__set_ButtonColor(pLVar3,(__this->fields).HFJAAPFLDEO,(MethodInfo *)0x0);
                pLVar3 = (__this->fields)._button;
                if (pLVar3 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar3,(__this->fields).HLOPBFJEDLK,(MethodInfo *)0x0);
                  pLVar3 = (__this->fields)._button;
                    /* try { // try from 031f7204 to 032f72cb has its CatchHandler @ 031f7204
                       catch() { ... } // from try @ 031f7204 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7510 with catch @ 031f7204
                       catch() { ... } // from try @ 031f754c with catch @ 031f7204
                       catch() { ... } // from try @ 031f75b0 with catch @ 031f7204
                       catch() { ... } // from try @ 031f75e0 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7710 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7758 with catch @ 031f7204
                       catch() { ... } // from try @ 031f77c8 with catch @ 031f7204 */
                  if ((pLVar3 != (LabelButton_o *)0x0) &&
                     (__this_03 = (pLVar3->fields).super.super.super.m_OnClick,
                     __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
                    pLVar3 = (__this->fields)._button;
                    if (pLVar3 != (LabelButton_o *)0x0) {
                      __this_04 = (UnityEngine_Events_UnityEvent_o *)
                                  (pLVar3->fields).super.super.super.m_OnClick;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0)
                        ;
                        method_00 = extraout_x1_00;
                        goto LAB_031f727c;
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
  }
LAB_031f72a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ImmediateCloseNotifications()  [RVA 0x30F79CC]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$ImmediateCloseNotifications @ RVA 0x30F79CC

void Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  
  if ((DAT_04566476 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566476 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 031f7a44 to 032f7a47 has its CatchHandler @ 031f7a50 */
                    /* try { // try from 031f7a48 to 032f7a6b has its CatchHandler @ 031f78d4 */
    pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f79bc with catch @ 031f7a4c
                        */
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f7a44 with catch @ 031f7a50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f79a0 with catch @ 031f7a54
                        */
    if ((pNVar2->fields).BDDIHIFJADE != false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(pNVar2,true,method_00);
      return;
    }
  }
                    /* try { // try from 031f7a6c to 032f7a6f has its CatchHandler @ 031f7aa0 */
                    /* try { // try from 031f7a70 to 032f7aaf has its CatchHandler @ 031f78d4 */
  return;
}


// ===== public void .ctor()  [RVA 0x30F81E0]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$.ctor @ RVA 0x30F81E0

void Nekki_SF2_GUI_Dialogs_NotificationsGame___ctor
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_RectTransform__o *__this_00;
  System_Collections_Generic_List_RectTransform__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04566477 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RectTransform>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_CLMJAEPAAEE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566477 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__72_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__72_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
    ppSVar1 = &(__this->fields).DKPPMJCLNAB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_RectTransform__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<RectTransform>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<RectTransform>__ctor__);
    ppSVar2 = &(__this->fields).KGJOFOAOICJ;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    (__this->fields).FDLMOCMIBDJ = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (__this->fields).PMHMOJGEAAN = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (__this->fields).HLOPBFJEDLK = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (__this->fields).HFJAAPFLDEO = 1;
    (__this->fields).EBAEBONPCMI = 1.0;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string HILHBNCHAAG(int OGPGLGPMEPD)  [RVA 0x30F7EB4]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$HILHBNCHAAG @ RVA 0x30F7EB4

System_String_o *
Nekki_SF2_GUI_Dialogs_NotificationsGame__HILHBNCHAAG
          (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566478 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21621/*"tutorial_try_move{img::ComboButtons.icon_down}{img::ComboButtons.icon_plus}{img::ComboButtons.icon_plus}{img::ComboBu..."*/);
    FUN_01bab630(&StringLiteral_5972/*"Error_validation_nointernet"*/);
    DAT_04566478 = 1;
  }
  puVar1 = &StringLiteral_5972/*"Error_validation_nointernet"*/;
  if (OGPGLGPMEPD != 0) {
    puVar1 = &StringLiteral_21621/*"tutorial_try_move{img::ComboButtons.icon_down}{img::ComboButtons.icon_plus}{img::ComboButtons.icon_plus}{img::ComboBu..."*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== private void Awake()  [RVA 0x30F8378]
// Nekki.SF2.GUI.Dialogs.NotificationsGame$$Awake @ RVA 0x30F8378

void Nekki_SF2_GUI_Dialogs_NotificationsGame__Awake
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  return;
}

