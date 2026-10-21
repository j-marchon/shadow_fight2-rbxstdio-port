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

