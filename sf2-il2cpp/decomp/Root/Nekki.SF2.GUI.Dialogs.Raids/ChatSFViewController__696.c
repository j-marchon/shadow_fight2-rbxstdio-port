// TypeDefIndex 696
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ChatSFViewController : TabView
// Fields:
//   private KPBOJBLLKPJ EBBJNLDAMCC; // 0x28
//   private CKLIGNAPKFO FIACGKGFFJP; // 0x30
//   private List<ChatSFView> CACFIIMNJMG; // 0x38
//   protected MKIDEJJPLCE _chatPanel; // 0x40
//   protected ChatSFTabButton _tabButton; // 0x48

// ===== public virtual bool IsViewAvailable()  [RVA 0x30340AC]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$IsViewAvailable @ RVA 0x30340AC

bool Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__IsViewAvailable
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public KPBOJBLLKPJ GetProxy()  [RVA 0x30340B4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetProxy @ RVA 0x30340B4

KPBOJBLLKPJ_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetProxy
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  return (__this->fields).EBBJNLDAMCC;
}


// ===== protected void KPBCGFECNJA()  [RVA 0x3032468]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$KPBCGFECNJA @ RVA 0x3032468

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KPBCGFECNJA
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *pSVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
                    /* try { // try from 0313246c to 03232483 has its CatchHandler @ 03131fdc */
  if ((DAT_04565d1d & 1) == 0) {
                    /* try { // try from 03132484 to 03232487 has its CatchHandler @ 031324b8 */
                    /* try { // try from 03132488 to 032324a3 has its CatchHandler @ 03131fdc */
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Item__);
                    /* try { // try from 031324a4 to 032324c3 has its CatchHandler @ 031324d8 */
    DAT_04565d1d = 1;
  }
                    /* catch() { ... } // from try @ 03132444 with catch @ 031324ac */
  pSVar1 = (__this->fields).CACFIIMNJMG;
  if (pSVar1 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* catch() { ... } // from try @ 03132484 with catch @ 031324b8 */
    if ((pSVar1->fields)._size < 1) {
      return;
    }
                    /* try { // try from 031324c4 to 032324cf has its CatchHandler @ 03131fdc */
                    /* try { // try from 031324d0 to 032324d7 has its CatchHandler @ 031324d8 */
    __this_00 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar1,0,
                           Method_System_Collections_Generic_List<ChatSFView>_get_Item__);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
                    /* catch() { ... } // from try @ 031323c4 with catch @ 031324d8
                       catch() { ... } // from try @ 03132464 with catch @ 031324d8
                       catch() { ... } // from try @ 031324a4 with catch @ 031324d8
                       catch() { ... } // from try @ 031324d0 with catch @ 031324d8 */
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).CACFIIMNJMG;
      if (pSVar1 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,0,
                   Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected ChatSFView OFBDOPOJDEH()  [RVA 0x30320C4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OFBDOPOJDEH @ RVA 0x30320C4

Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *EDEHNHIHDDH;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d1e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    DAT_04565d1e = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (__this->fields).CACFIIMNJMG;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
    if (0 < (EDEHNHIHDDH->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)
               DJNBJHPDKDP__KIKGKKGDCKK<object>
                         ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                          Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected void KOJMOHMGLAI(ChatSFView MIJCJJCICDA, bool HAFKHBAABDI = False)  [RVA 0x303213C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$KOJMOHMGLAI @ RVA 0x303213C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *MIJCJJCICDA,bool HAFKHBAABDI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *x;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ChatSFView__o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565d1f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_Insert__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d1f = 1;
  }
                    /* try { // try from 031321d0 to 032321d3 has its CatchHandler @ 03132400 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 031321d8 to 032321e3 has its CatchHandler @ 031323fc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031321f0 to 032321f7 has its CatchHandler @ 0313241c */
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)MIJCJJCICDA,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if (MIJCJJCICDA != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)MIJCJJCICDA,(MethodInfo *)0x0);
                    /* try { // try from 03132208 to 03232213 has its CatchHandler @ 03132420 */
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0313221c to 03232223 has its CatchHandler @ 03132410 */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).CACFIIMNJMG;
      if (pSVar4 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* try { // try from 03132244 to 03232257 has its CatchHandler @ 03132428 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                   Method_System_Collections_Generic_List<ChatSFView>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
                    /* try { // try from 03132258 to 0323225f has its CatchHandler @ 03132418 */
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
                    /* try { // try from 03132268 to 0323226b has its CatchHandler @ 031322b4 */
                    /* try { // try from 0313226c to 0323227b has its CatchHandler @ 031322b0 */
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<ChatSFView>_MoveNext__
                                 ), x = local_60.fields._current, bVar3) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03132288 to 0323229b has its CatchHandler @ 03132424 */
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if (bVar3) {
                    /* try { // try from 0313229c to 032322d3 has its CatchHandler @ 03131fdc */
            if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* catch() { ... } // from try @ 0313226c with catch @ 031322b0 */
                    /* catch() { ... } // from try @ 03132268 with catch @ 031322b4 */
            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<ChatSFView>_Dispose__
                  );
        lVar2 = Method_System_Collections_Generic_List<ChatSFView>_Add__;
                    /* try { // try from 031322d4 to 032322d7 has its CatchHandler @ 031323e8 */
        pSVar4 = (__this->fields).CACFIIMNJMG;
        if (pSVar4 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
          if (HAFKHBAABDI) {
                    /* try { // try from 031322f4 to 032322fb has its CatchHandler @ 031323f8 */
            System_Collections_Generic_List<object>__Insert
                      ((System_Collections_Generic_List_object__o *)pSVar4,0,
                       (Il2CppObject *)MIJCJJCICDA,
                       Method_System_Collections_Generic_List<ChatSFView>_Insert__);
          }
          else {
                    /* try { // try from 03132300 to 03232307 has its CatchHandler @ 031323f4 */
            pNVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_array *)0x0) goto LAB_03132380;
            uVar1 = (pSVar4->fields)._size;
                    /* try { // try from 03132328 to 0323232f has its CatchHandler @ 03132404 */
            if (uVar1 < (uint)pNVar5->max_length) {
                    /* try { // try from 03132330 to 03232367 has its CatchHandler @ 03131fdc */
              (pSVar4->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = MIJCJJCICDA;
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,MIJCJJCICDA);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)MIJCJJCICDA,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
                    /* try { // try from 03132368 to 0323236f has its CatchHandler @ 03132414 */
                    /* try { // try from 03132370 to 032323b7 has its CatchHandler @ 03131fdc */
          return;
        }
      }
    }
  }
LAB_03132380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Show()  [RVA 0x30340BC]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$Show @ RVA 0x30340BC

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Show
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_04565d20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d20 = 1;
  }
  TabView__Show((TabView_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar2,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int GetIndexBy(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x3034150]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetIndexBy @ RVA 0x3034150

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetIndexBy
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
                  ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IHNKCJHDDKD;
  if ((DAT_04565d21 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    DAT_04565d21 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method_00);
  if ((IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0)) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IHNKCJHDDKD,
                       Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    return iVar1;
  }
  return -1;
}


// ===== protected void PGEMCFICNLA()  [RVA 0x303424C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$PGEMCFICNLA @ RVA 0x303424C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ChatSFView__o *pSVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04565d22 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d22 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).CACFIIMNJMG;
  if (pSVar2 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
    if (1 < (pSVar2->fields)._size) {
      __this_00 = (UnityEngine_Component_o *)
                  DJNBJHPDKDP__KIKGKKGDCKK<object>
                            ((System_Collections_Generic_List_T__o *)pSVar2,
                             Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
      pSVar2 = (__this->fields).CACFIIMNJMG;
      if ((pSVar2 == (System_Collections_Generic_List_ChatSFView__o *)0x0) ||
         (System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,(pSVar2->fields)._size + -1
                     ,Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__),
         __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_03134370;
      pUVar3 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    exists = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH(__this,method);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((exists != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)exists,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03134370:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SendMessage(string NONPLOOOOAG)  [RVA 0x3034374]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$SendMessage @ RVA 0x3034374

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SendMessage
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
               System_String_o *NONPLOOOOAG,MethodInfo *method)

{
  KPBOJBLLKPJ_o *pKVar1;
  
  pKVar1 = (__this->fields).EBBJNLDAMCC;
  if (pKVar1 != (KPBOJBLLKPJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pKVar1->klass->vtable)._4_JPGGPDEIENC.methodPtr)
              (pKVar1,NONPLOOOOAG,(ulong)(uint)(__this->fields).FIACGKGFFJP,
               (pKVar1->klass->vtable)._4_JPGGPDEIENC.method);
    return;
  }
  return;
}


// ===== public void Init(KPBOJBLLKPJ KBIIAPCMIGJ, MKIDEJJPLCE DOOAEHPGKNL, CKLIGNAPKFO HPIPAGINPJK)  [RVA 0x3031BD0]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$Init @ RVA 0x3031BD0

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
               KPBOJBLLKPJ_o *KBIIAPCMIGJ,MKIDEJJPLCE_o *DOOAEHPGKNL,int32_t HPIPAGINPJK,
               MethodInfo *method)

{
  MKIDEJJPLCE_o **ppMVar1;
  KPBOJBLLKPJ_o **ppKVar2;
  
  ppMVar1 = &(__this->fields)._chatPanel;
  *ppMVar1 = DOOAEHPGKNL;
  thunk_FUN_01c20e04(ppMVar1,DOOAEHPGKNL);
  ppKVar2 = &(__this->fields).EBBJNLDAMCC;
  *ppKVar2 = KBIIAPCMIGJ;
  thunk_FUN_01c20e04(ppKVar2,KBIIAPCMIGJ);
  (__this->fields).FIACGKGFFJP = HPIPAGINPJK;
  TabView__Init((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void EMCBIGBMKLN()  [RVA 0x303240C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$EMCBIGBMKLN @ RVA 0x303240C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__EMCBIGBMKLN
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ChatSFView__o *pSVar1;
  
                    /* catch() { ... } // from try @ 0313221c with catch @ 03132410 */
                    /* catch() { ... } // from try @ 03132368 with catch @ 03132414 */
                    /* catch() { ... } // from try @ 03132258 with catch @ 03132418 */
                    /* catch() { ... } // from try @ 031321f0 with catch @ 0313241c */
                    /* catch() { ... } // from try @ 03132208 with catch @ 03132420 */
  if ((DAT_04565d23 & 1) == 0) {
                    /* catch() { ... } // from try @ 03132288 with catch @ 03132424 */
                    /* catch() { ... } // from try @ 03132244 with catch @ 03132428 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    DAT_04565d23 = 1;
    method = extraout_x1;
  }
  while( true ) {
                    /* try { // try from 03132444 to 03232447 has its CatchHandler @ 031324ac */
    pSVar1 = (__this->fields).CACFIIMNJMG;
    if (pSVar1 == (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03132464 to 0323246b has its CatchHandler @ 031324d8 */
      FUN_01bab8c8();
    }
    if ((pSVar1->fields)._size < 2) break;
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA(__this,method);
    method = extraout_x1_00;
  }
  return;
}


// ===== public void OnNewMessageInChannel()  [RVA 0x3034394]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OnNewMessageInChannel @ RVA 0x3034394

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnNewMessageInChannel
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  MKIDEJJPLCE_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  MKIDEJJPLCE_o *pMVar7;
  
  if ((DAT_04565d24 & 1) == 0) {
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_04565d24 = 1;
  }
  pMVar7 = (__this->fields)._chatPanel;
  if (pMVar7 == (MKIDEJJPLCE_o *)0x0) {
    return;
  }
  pMVar4 = pMVar7->klass;
  uVar1 = (__this->fields).FIACGKGFFJP;
  uVar2._0_1_ = (pMVar4->_2).rank;
  uVar2._1_1_ = (pMVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar2;
  if (uVar5 != 0) {
    piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
        pVVar3 = pMVar4->vtable + (*piVar6 + 5);
        goto LAB_03134430;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MKIDEJJPLCE_TypeInfo,5);
LAB_03134430:
                    /* WARNING: Could not recover jumptable at 0x03134444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pMVar7,(ulong)uVar1,pVVar3->method);
  return;
}


// ===== public ChatSFTabButton get_TabButton()  [RVA 0x3034448]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$get_TabButton @ RVA 0x3034448

Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__get_TabButton
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  return (__this->fields)._tabButton;
}


// ===== public void OnReconnectPressed()  [RVA 0x3034450]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OnReconnectPressed @ RVA 0x3034450

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnReconnectPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d25 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565d25 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
      FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__OIPLCHEIFNJ((MethodInfo *)0x0);
  return;
}


// ===== public virtual void InitController()  [RVA 0x30344E8]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$InitController @ RVA 0x30344E8

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__InitController
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x031344f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._17_Show.methodPtr)(__this,(__this->klass->vtable)._17_Show.method);
  return;
}


// ===== public void SetEditBoxVisible(bool CJNHFNHJHPE)  [RVA 0x30344F8]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$SetEditBoxVisible @ RVA 0x30344F8

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SetEditBoxVisible
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_04565d26 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d26 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)
              Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH(__this,method_00);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
      if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo) {
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0;
      }
      goto LAB_03134584;
    }
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0;
LAB_03134584:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar2) {
    return;
  }
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__SetEditBoxVisible
            (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public int GetMessagesCount()  [RVA 0x30345D4]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetMessagesCount @ RVA 0x30345D4

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessagesCount
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Count__);
    DAT_04565d27 = 1;
    method = extraout_x1;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method);
  iVar1 = 0;
  if (pSVar2 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
  }
  return iVar1;
}


// ===== public CKLIGNAPKFO GetChannel()  [RVA 0x303461C]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetChannel @ RVA 0x303461C

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetChannel
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  return (__this->fields).FIACGKGFFJP;
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x3031FF8]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$UpdateContent @ RVA 0x3031FF8

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *MIJCJJCICDA;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d28 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d28 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                (__this,(MethodInfo *)IMMNELPBGIF);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      MIJCJJCICDA = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatMessageView
                              (__this_00,__this,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
                (__this,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)MIJCJJCICDA,false,in_x3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected List<ODKDFMHHLIP> FPKAMILHIJJ()  [RVA 0x30341BC]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$FPKAMILHIJJ @ RVA 0x30341BC

System_Collections_Generic_List_ODKDFMHHLIP__o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  KPBOJBLLKPJ_o *__this_00;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_9641/*"Null _msgProxy!!!"*/);
    DAT_04565d29 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).EBBJNLDAMCC;
  if (__this_00 != (KPBOJBLLKPJ_o *)0x0) {
    pSVar1 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this_00,(__this->fields).FIACGKGFFJP,(MethodInfo *)0x0);
    return pSVar1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__LogError(StringLiteral_9641/*"Null _msgProxy!!!"*/,(MethodInfo *)0x0);
  return (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0;
}


// ===== public void .ctor()  [RVA 0x3032678]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$.ctor @ RVA 0x3032678

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *__this_00;
  System_Collections_Generic_List_ChatSFView__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0313268c to 032326d3 has its CatchHandler @ 0313268c
                       catch() { ... } // from try @ 0313268c with catch @ 0313268c
                       catch() { ... } // from try @ 03132700 with catch @ 0313268c
                       catch() { ... } // from try @ 03132770 with catch @ 0313268c */
  if ((DAT_04565d2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChatSFView>_TypeInfo);
    DAT_04565d2a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ChatSFView__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChatSFView>_TypeInfo,method);
                    /* try { // try from 031326d4 to 032326df has its CatchHandler @ 03132730 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChatSFView>__ctor__);
  ppSVar1 = &(__this->fields).CACFIIMNJMG;
  *ppSVar1 = __this_00;
                    /* try { // try from 031326e0 to 032326ff has its CatchHandler @ 03132734 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Hide()  [RVA 0x3034624]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$Hide @ RVA 0x3034624

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Hide
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_04565d2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d2b = 1;
  }
  TabView__Hide((TabView_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar2,true,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public ODKDFMHHLIP GetMessage(int CKMDPHJOKAF)  [RVA 0x30346B8]
// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetMessage @ RVA 0x30346B8

ODKDFMHHLIP_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessage
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,int32_t CKMDPHJOKAF,
          MethodInfo *method)

{
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  ODKDFMHHLIP_o *pOVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)CKMDPHJOKAF;
  if ((DAT_04565d2c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Item__);
    DAT_04565d2c = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method_00);
  if ((__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) &&
     (CKMDPHJOKAF < (__this_00->fields)._size)) {
    pOVar1 = (ODKDFMHHLIP_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,CKMDPHJOKAF,
                        Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Item__);
    return pOVar1;
  }
  return (ODKDFMHHLIP_o *)0x0;
}

