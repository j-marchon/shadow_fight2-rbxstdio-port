// TypeDefIndex 1661
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class BattleRaidSlider : MonoBehaviour
// Fields:
//   public const float SCROLL_TIME = 0.2;
//   public const Ease SCROLL_EASE = 5;
//   private SimpleScroll _scroll; // 0x20
//   private GameObject _sliderItemPrefab; // 0x28
//   private ResolutionButton _slideForward; // 0x30
//   private ResolutionButton _slideBackward; // 0x38
//   private CheckBox AAGPHDAMKOI; // 0x40
//   private float FDMLNHPDHKJ; // 0x48
//   private float JKOANJLODNP; // 0x4C
//   private List<GEKCMGLDMEE> KNPKLNHJLEN; // 0x50
//   private Action<BattleRaidCell> IBOMDDIAHOH; // 0x58

// ===== public void SetFocusesScales(float LOJINJPNGHH, float DCJJPCIHILE)  [RVA 0x31C6D3C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$SetFocusesScales @ RVA 0x31C6D3C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetFocusesScales
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,float LOJINJPNGHH,
               float DCJJPCIHILE,MethodInfo *method)

{
                    /* try { // try from 032c6d3c to 033c6d47 has its CatchHandler @ 032c7280 */
  (__this->fields).FDMLNHPDHKJ = LOJINJPNGHH;
  (__this->fields).JKOANJLODNP = DCJJPCIHILE;
  return;
}


// ===== private void LBBMPJKOINK(int MJBMLNKAPGC)  [RVA 0x31C6D44]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$LBBMPJKOINK @ RVA 0x31C6D44

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,int32_t MJBMLNKAPGC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 032c6d60 to 033c6d63 has its CatchHandler @ 032c71f4 */
                    /* try { // try from 032c6d64 to 033c6d6f has its CatchHandler @ 032c726c */
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(__this_00,MJBMLNKAPGC,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnScroll(BaseScrollItem IKMIAOJNAEA)  [RVA 0x31C6D6C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$OnScroll @ RVA 0x31C6D6C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKMIAOJNAEA,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  System_Action_BattleRaidCell__o *pSVar2;
  
                    /* try { // try from 032c6d78 to 033c6d7f has its CatchHandler @ 032c7254 */
  if ((DAT_04566c39 & 1) == 0) {
                    /* try { // try from 032c6d90 to 033c6d97 has its CatchHandler @ 032c7260 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    DAT_04566c39 = 1;
  }
                    /* try { // try from 032c6d9c to 033c6da3 has its CatchHandler @ 032c7250 */
  if (IKMIAOJNAEA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* try { // try from 032c6db4 to 033c6dbb has its CatchHandler @ 032c7274 */
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032c6dbc to 033c6dcf has its CatchHandler @ 032c7244 */
    if ((IKMIAOJNAEA->klass->_2).naturalAligment < bVar1) {
      IKMIAOJNAEA = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
    }
    else {
                    /* try { // try from 032c6dd0 to 033c6ddb has its CatchHandler @ 032c725c */
      if ((IKMIAOJNAEA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo) {
        IKMIAOJNAEA = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
      }
    }
  }
  pSVar2 = (__this->fields).IBOMDDIAHOH;
  if (pSVar2 == (System_Action_BattleRaidCell__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032c6dec to 033c6def has its CatchHandler @ 032c71f0 */
  method_00 = (MethodInfo *)(pSVar2->fields).super.super.method;
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,IKMIAOJNAEA);
                    /* try { // try from 032c6e04 to 033c6e0b has its CatchHandler @ 032c7220 */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__EJOCEINJHFN
            (__this,(Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)IKMIAOJNAEA,method_00);
  return;
}


// ===== private void Update()  [RVA 0x31C7014]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$Update @ RVA 0x31C7014

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 032c7014 to 033c701b has its CatchHandler @ 032c71c0 */
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 032c702c to 033c7033 has its CatchHandler @ 032c71e0 */
    CJNHFNHJHPE = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                            (__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 032c7038 to 033c703f has its CatchHandler @ 032c71cc */
    Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK(__this,CJNHFNHJHPE,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLBKGAANIAE()  [RVA 0x31C70B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$JLBKGAANIAE @ RVA 0x31C70B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__JLBKGAANIAE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LBBMPJKOINK(__this,1,in_x2);
                    /* try { // try from 032c70c8 to 033c70df has its CatchHandler @ 032c7214 */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK(__this,false,in_x2);
                    /* try { // try from 032c70e0 to 033c71a7 has its CatchHandler @ 032c68a4 */
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void DeleteAllItems()  [RVA 0x31C70E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$DeleteAllItems @ RVA 0x31C70E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__DeleteAllItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_GEKCMGLDMEE__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566c3a & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_Clear__);
    DAT_04566c3a = 1;
  }
  pSVar1 = (__this->fields).KNPKLNHJLEN;
  if (pSVar1 != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void ScrollToItem(int OGPGLGPMEPD, float LFJGFLNMBMC)  [RVA 0x31C7154]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$ScrollToItem @ RVA 0x31C7154

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,int32_t OGPGLGPMEPD,
               float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this_00,OGPGLGPMEPD,LFJGFLNMBMC,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31C7174]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$.ctor @ RVA 0x31C7174

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GEKCMGLDMEE__o *__this_00;
  System_Collections_Generic_List_GEKCMGLDMEE__o **ppSVar1;
  System_Action_BattleRaidCell__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Action_BattleRaidCell__o *pSVar3;
  
  if ((DAT_04566c3b & 1) == 0) {
                    /* try { // try from 032c71a8 to 033c71ab has its CatchHandler @ 032c72cc */
                    /* try { // try from 032c71ac to 033c71af has its CatchHandler @ 032c7294 */
                    /* try { // try from 032c71b0 to 033c71b3 has its CatchHandler @ 032c7218 */
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
                    /* try { // try from 032c71b4 to 033c71b7 has its CatchHandler @ 032c68a4 */
                    /* try { // try from 032c71b8 to 033c71bb has its CatchHandler @ 032c71d0 */
                    /* catch() { ... } // from try @ 032c6fc8 with catch @ 032c71bc
                       try { // try from 032c71bc to 033c72e7 has its CatchHandler @ 032c68a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
                    /* catch() { ... } // from try @ 032c7014 with catch @ 032c71c0 */
                    /* catch() { ... } // from try @ 032c7088 with catch @ 032c71c4 */
                    /* catch() { ... } // from try @ 032c7058 with catch @ 032c71c8 */
    FUN_01bab630(&System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo);
                    /* catch() { ... } // from try @ 032c7038 with catch @ 032c71cc */
                    /* catch() { ... } // from try @ 032c71b8 with catch @ 032c71d0 */
                    /* catch() { ... } // from try @ 032c7008 with catch @ 032c71d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_LLNCCODKCGN__);
                    /* catch() { ... } // from try @ 032c7094 with catch @ 032c71d8 */
                    /* catch() { ... } // from try @ 032c70ac with catch @ 032c71dc */
                    /* catch() { ... } // from try @ 032c702c with catch @ 032c71e0 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 032c7070 with catch @ 032c71e4 */
                    /* catch() { ... } // from try @ 032c7050 with catch @ 032c71e8 */
    DAT_04566c3b = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032c70b4 with catch @ 032c71ec */
                    /* catch() { ... } // from try @ 032c6dec with catch @ 032c71f0
                       catch() { ... } // from try @ 032c6ff0 with catch @ 032c71f0 */
  __this_00 = (System_Collections_Generic_List_GEKCMGLDMEE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo,method);
                    /* catch() { ... } // from try @ 032c6d60 with catch @ 032c71f4 */
                    /* catch() { ... } // from try @ 032c6e54 with catch @ 032c71f8 */
                    /* catch() { ... } // from try @ 032c6e10 with catch @ 032c71fc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
  ppSVar1 = &(__this->fields).KNPKLNHJLEN;
                    /* catch() { ... } // from try @ 032c6ea8 with catch @ 032c7200 */
                    /* catch() { ... } // from try @ 032c6e84 with catch @ 032c7204 */
  *ppSVar1 = __this_00;
                    /* catch() { ... } // from try @ 032c6e28 with catch @ 032c7208 */
                    /* catch() { ... } // from try @ 032c6e34 with catch @ 032c720c */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* catch() { ... } // from try @ 032c6e90 with catch @ 032c7210 */
                    /* catch() { ... } // from try @ 032c70c8 with catch @ 032c7214 */
                    /* catch() { ... } // from try @ 032c71b0 with catch @ 032c7218 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032c6eb0 with catch @ 032c721c */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 032c6e04 with catch @ 032c7220 */
  }
                    /* catch() { ... } // from try @ 032c6fcc with catch @ 032c7224 */
                    /* catch() { ... } // from try @ 032c6e4c with catch @ 032c7228 */
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_TypeInfo->static_fields->__9__26_0
  ;
                    /* catch() { ... } // from try @ 032c6e6c with catch @ 032c722c */
  if (pSVar3 == (System_Action_BattleRaidCell__o *)0x0) {
                    /* catch() { ... } // from try @ 032c6d2c with catch @ 032c7230 */
                    /* catch() { ... } // from try @ 032c6f64 with catch @ 032c7234 */
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032c6ee4 with catch @ 032c7238 */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 032c6f28 with catch @ 032c723c */
    }
                    /* catch() { ... } // from try @ 032c6efc with catch @ 032c7240 */
                    /* catch() { ... } // from try @ 032c6dbc with catch @ 032c7244 */
                    /* catch() { ... } // from try @ 032c6ec4 with catch @ 032c7248 */
                    /* catch() { ... } // from try @ 032c6f20 with catch @ 032c724c */
                    /* catch() { ... } // from try @ 032c6d9c with catch @ 032c7250 */
                    /* catch() { ... } // from try @ 032c6d78 with catch @ 032c7254 */
    pSVar3 = (System_Action_BattleRaidCell__o *)
             thunk_FUN_01bda818(System_Action<BattleRaidCell>_TypeInfo);
                    /* catch() { ... } // from try @ 032c6f58 with catch @ 032c7258 */
                    /* catch() { ... } // from try @ 032c6dd0 with catch @ 032c725c */
                    /* catch() { ... } // from try @ 032c6d90 with catch @ 032c7260 */
                    /* catch() { ... } // from try @ 032c6f84 with catch @ 032c7264 */
                    /* catch() { ... } // from try @ 032c6f40 with catch @ 032c7268 */
                    /* catch() { ... } // from try @ 032c6d64 with catch @ 032c726c */
                    /* catch() { ... } // from try @ 032c6f7c with catch @ 032c7270 */
    System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 032c6db4 with catch @ 032c7274 */
                    /* catch() { ... } // from try @ 032c6f08 with catch @ 032c7278 */
                    /* catch() { ... } // from try @ 032c6bf8 with catch @ 032c727c */
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_<>c_TypeInfo->static_fields->
               __9__26_0;
                    /* catch() { ... } // from try @ 032c6d3c with catch @ 032c7280 */
    *ppSVar2 = pSVar3;
                    /* catch() { ... } // from try @ 032c6c70 with catch @ 032c7284 */
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
                    /* catch() { ... } // from try @ 032c6c7c with catch @ 032c7288 */
  ppSVar2 = &(__this->fields).IBOMDDIAHOH;
                    /* catch() { ... } // from try @ 032c6c9c with catch @ 032c728c */
  *ppSVar2 = pSVar3;
                    /* catch() { ... } // from try @ 032c6c94 with catch @ 032c7290 */
                    /* catch() { ... } // from try @ 032c71ac with catch @ 032c7294 */
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
                    /* catch() { ... } // from try @ 032c6cd8 with catch @ 032c7298 */
                    /* catch() { ... } // from try @ 032c6c58 with catch @ 032c729c */
                    /* catch() { ... } // from try @ 032c6cf0 with catch @ 032c72a0 */
                    /* catch() { ... } // from try @ 032c6cb4 with catch @ 032c72a4 */
                    /* catch() { ... } // from try @ 032c6ce8 with catch @ 032c72a8 */
                    /* catch() { ... } // from try @ 032c6ccc with catch @ 032c72ac */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HCOKJNGGENJ()  [RVA 0x31C72B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$HCOKJNGGENJ @ RVA 0x31C72B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__HCOKJNGGENJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* catch() { ... } // from try @ 032c6d30 with catch @ 032c72b0 */
                    /* catch() { ... } // from try @ 032c6c4c with catch @ 032c72b4 */
                    /* catch() { ... } // from try @ 032c6f98 with catch @ 032c72b8 */
                    /* catch() { ... } // from try @ 032c6c1c with catch @ 032c72bc */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LBBMPJKOINK(__this,-1,in_x2);
                    /* catch() { ... } // from try @ 032c6d04 with catch @ 032c72c0 */
                    /* catch() { ... } // from try @ 032c6bfc with catch @ 032c72c4 */
                    /* catch() { ... } // from try @ 032c6c0c with catch @ 032c72c8 */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK(__this,false,in_x2);
                    /* catch() { ... } // from try @ 032c71a8 with catch @ 032c72cc */
                    /* catch() { ... } // from try @ 032c6bdc with catch @ 032c72d0 */
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public int GetCurrentItemLogicIndex()  [RVA 0x31C72DC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$GetCurrentItemLogicIndex @ RVA 0x31C72DC

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__GetCurrentItemLogicIndex
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  int32_t local_4;
  
  local_4 = -1;
                    /* try { // try from 032c72e8 to 033c72eb has its CatchHandler @ 032c7314 */
  __this_00 = (__this->fields)._scroll;
                    /* try { // try from 032c72ec to 033c7323 has its CatchHandler @ 032c68a4 */
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId(__this_00,&local_4,(MethodInfo *)0x0);
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetItems(List<GEKCMGLDMEE> GHAAKPDHIJJ)  [RVA 0x31C730C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$SetItems @ RVA 0x31C730C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Collections_Generic_List_GEKCMGLDMEE__o *GHAAKPDHIJJ,MethodInfo *method)

{
  Il2CppObject *DKMMBMBMJBO;
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this_00;
  System_Collections_Generic_List_GEKCMGLDMEE__o **ppSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* catch() { ... } // from try @ 032c72e8 with catch @ 032c7314 */
                    /* try { // try from 032c7324 to 033c732b has its CatchHandler @ 032c7340 */
                    /* try { // try from 032c732c to 033c7337 has its CatchHandler @ 032c68a4 */
  if ((DAT_04566c3c & 1) == 0) {
                    /* try { // try from 032c7338 to 033c733f has its CatchHandler @ 032c7340 */
                    /* catch() { ... } // from try @ 032c7324 with catch @ 032c7340
                       catch() { ... } // from try @ 032c7338 with catch @ 032c7340 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_Dispose__);
                    /* try { // try from 032c7344 to 033c76c7 has its CatchHandler @ 032c7344
                       catch() { ... } // from try @ 032c7344 with catch @ 032c7344
                       catch() { ... } // from try @ 032c78ec with catch @ 032c7344
                       catch() { ... } // from try @ 032c7ad4 with catch @ 032c7344
                       catch() { ... } // from try @ 032c7b68 with catch @ 032c7344
                       catch() { ... } // from try @ 032c7ba8 with catch @ 032c7344 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattleRaidCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_GetEnumerator__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566c3c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  ppSVar3 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar3 = GHAAKPDHIJJ;
  thunk_FUN_01c20e04(ppSVar3,GHAAKPDHIJJ);
  pNVar2 = (__this->fields)._scroll;
  if ((pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar2,(MethodInfo *)0x0),
     GHAAKPDHIJJ != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<GEKCMGLDMEE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_MoveNext__
                             ), DKMMBMBMJBO = local_70.fields._current, bVar1) {
      pUVar4 = (__this->fields)._sliderItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar4 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<BattleRaidCell>__);
      if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__Init
                (__this_00,(GEKCMGLDMEE_o *)DKMMBMBMJBO,(__this->fields)._scroll,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._scroll;
      if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_SimpleScroll__AddItem
                (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_Dispose__);
    pNVar2 = (__this->fields)._scroll;
    if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder(pNVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EJOCEINJHFN(BattleRaidCell LGCACNFAMOI)  [RVA 0x31C6E10]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$EJOCEINJHFN @ RVA 0x31C6E10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__EJOCEINJHFN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *LGCACNFAMOI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_GEKCMGLDMEE__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 032c6e10 to 033c6e17 has its CatchHandler @ 032c71fc */
                    /* try { // try from 032c6e28 to 033c6e2f has its CatchHandler @ 032c7208 */
  if ((DAT_04566c3d & 1) == 0) {
                    /* try { // try from 032c6e34 to 033c6e3b has its CatchHandler @ 032c720c */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* try { // try from 032c6e4c to 033c6e53 has its CatchHandler @ 032c7228 */
                    /* try { // try from 032c6e54 to 033c6e63 has its CatchHandler @ 032c71f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
                    /* try { // try from 032c6e6c to 033c6e73 has its CatchHandler @ 032c722c */
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_get_Count__);
    DAT_04566c3d = 1;
  }
                    /* try { // try from 032c6e84 to 033c6e8b has its CatchHandler @ 032c7204 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).KNPKLNHJLEN;
                    /* try { // try from 032c6e90 to 033c6e97 has its CatchHandler @ 032c7210 */
  if (pSVar4 != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
                    /* try { // try from 032c6f84 to 033c6f93 has its CatchHandler @ 032c7264 */
      return;
    }
    pNVar5 = (__this->fields)._scroll;
                    /* try { // try from 032c6ea8 to 033c6eaf has its CatchHandler @ 032c7200 */
    if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* try { // try from 032c6eb0 to 033c6ebf has its CatchHandler @ 032c721c */
                    /* try { // try from 032c6ec4 to 033c6edb has its CatchHandler @ 032c7248 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 032c6ee4 to 033c6eeb has its CatchHandler @ 032c7238 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                               ), bVar3) {
                    /* try { // try from 032c6efc to 033c6f03 has its CatchHandler @ 032c7240 */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
LAB_032c6f98:
                    /* try { // try from 032c6f98 to 033c6faf has its CatchHandler @ 032c72b8 */
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar6 = (local_50.fields._current)->klass;
                    /* try { // try from 032c6f08 to 033c6f0f has its CatchHandler @ 032c7278 */
        bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032c6f20 to 033c6f27 has its CatchHandler @ 032c724c */
                    /* try { // try from 032c6f28 to 033c6f37 has its CatchHandler @ 032c723c */
        if (((pIVar6->_2).naturalAligment < bVar2) ||
           ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo))
        goto LAB_032c6f98;
                    /* try { // try from 032c6f40 to 033c6f47 has its CatchHandler @ 032c7268 */
        pIVar1 = local_50.fields._current;
        if ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo) {
          pIVar1 = (Il2CppObject *)0x0;
        }
        (*pIVar1->klass->vtable[0x34].methodPtr)
                  ((ulong)(uint)(__this->fields).JKOANJLODNP,pIVar1,
                   pIVar1->klass->vtable[0x34].method);
                    /* try { // try from 032c6f58 to 033c6f5f has its CatchHandler @ 032c7258 */
      }
                    /* try { // try from 032c6f64 to 033c6f6b has its CatchHandler @ 032c7234 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      if (LGCACNFAMOI != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
                    /* try { // try from 032c6f7c to 033c6f83 has its CatchHandler @ 032c7270 */
        (*(LGCACNFAMOI->klass->vtable)._52_SetContentScale.methodPtr)
                  ((ulong)(uint)(__this->fields).FDMLNHPDHKJ,LGCACNFAMOI,
                   (LGCACNFAMOI->klass->vtable)._52_SetContentScale.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(CheckBox GPGOAFNNMPD)  [RVA 0x31C7558]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$Init @ RVA 0x31C7558

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_Scripts_CheckBox_o *GPGOAFNNMPD,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  Nekki_SF2_GUI_Scripts_CheckBox_o **ppNVar5;
  undefined8 uVar6;
  
  if ((DAT_04566c3e & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_HCOKJNGGENJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_JLBKGAANIAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_OnScroll__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/);
    DAT_04566c3e = 1;
  }
  ppNVar5 = &(__this->fields).AAGPHDAMKOI;
  *ppNVar5 = GPGOAFNNMPD;
  thunk_FUN_01c20e04(ppNVar5,GPGOAFNNMPD);
  pNVar1 = (__this->fields)._scroll;
  uVar6 = NEON_fmov(0x3f800000,4);
  (__this->fields).FDMLNHPDHKJ = (float)(int)uVar6;
  (__this->fields).JKOANJLODNP = (float)(int)((ulong)uVar6 >> 0x20);
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                  thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      if ((pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._slideForward;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                    (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._slideForward;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                      (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._slideForward;
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c76c8 to 033c76cf has its CatchHandler @ 032c7b4c */
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032c76e4 to 033c76e7 has its CatchHandler @ 032c7ad8 */
                    /* try { // try from 032c76e8 to 033c76f3 has its CatchHandler @ 032c7b48 */
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 032c76f8 to 033c7703 has its CatchHandler @ 032c7b3c */
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._slideBackward;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c7710 to 033c7717 has its CatchHandler @ 032c7b04 */
                  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                            (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._slideBackward;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c7728 to 033c772f has its CatchHandler @ 032c7b30 */
                    /* try { // try from 032c7734 to 033c773b has its CatchHandler @ 032c7b00 */
                    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                              (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields)._slideBackward;
                    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                      pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                               (pNVar2->fields).super.super.m_OnClick;
                    /* try { // try from 032c774c to 033c7753 has its CatchHandler @ 032c7b24 */
                      pUVar3 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032c7754 to 033c7763 has its CatchHandler @ 032c7b10 */
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 032c776c to 033c7773 has its CatchHandler @ 032c7b0c */
                        method_00 = (MethodInfo *)0x0;
                        UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032c7784 to 033c778b has its CatchHandler @ 032c7b08 */
                    /* try { // try from 032c7790 to 033c7797 has its CatchHandler @ 032c7b2c */
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK
                                  (__this,true,method_00);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnSelectedCellAction(Action<BattleRaidCell> CJNHFNHJHPE)  [RVA 0x31C779C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$remove_OnSelectedCellAction @ RVA 0x31C779C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__remove_OnSelectedCellAction
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Action_BattleRaidCell__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BattleRaidCell__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BattleRaidCell__o *pSVar5;
  System_Action_BattleRaidCell__o **ppSVar6;
  System_Action_BattleRaidCell__o *source;
  
                    /* try { // try from 032c77a8 to 033c77af has its CatchHandler @ 032c7afc */
                    /* try { // try from 032c77b0 to 033c77bf has its CatchHandler @ 032c7b20 */
  if ((DAT_04566c3f & 1) == 0) {
                    /* try { // try from 032c77c4 to 033c77e3 has its CatchHandler @ 032c7b44 */
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    DAT_04566c3f = 1;
  }
  ppSVar6 = &(__this->fields).IBOMDDIAHOH;
  source = *ppSVar6;
  do {
                    /* try { // try from 032c77e4 to 033c7807 has its CatchHandler @ 032c7b34 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BattleRaidCell>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BattleRaidCell>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c7848 to 033c784f has its CatchHandler @ 032c7af8 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BattleRaidCell__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 032c782c to 033c7833 has its CatchHandler @ 032c7b1c */
                    /* try { // try from 032c7838 to 033c783f has its CatchHandler @ 032c7ae0 */
  return;
}


// ===== private void LNAECHIOFNK(bool CJNHFNHJHPE)  [RVA 0x31C7044]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$LNAECHIOFNK @ RVA 0x31C7044

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Scripts_CheckBox_o *__this_00;
  
                    /* try { // try from 032c7050 to 033c7057 has its CatchHandler @ 032c71e8 */
  pNVar1 = (__this->fields)._slideForward;
                    /* try { // try from 032c7058 to 033c7067 has its CatchHandler @ 032c71c8 */
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032c7070 to 033c7077 has its CatchHandler @ 032c71e4 */
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._slideBackward;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032c7088 to 033c708f has its CatchHandler @ 032c71c4 */
                    /* try { // try from 032c7094 to 033c709b has its CatchHandler @ 032c71d8 */
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (__this->fields).AAGPHDAMKOI;
      if (__this_00 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* try { // try from 032c70ac to 033c70b3 has its CatchHandler @ 032c71dc */
        Nekki_SF2_GUI_Scripts_CheckBox__set_interactable(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c70b4 to 033c70c3 has its CatchHandler @ 032c71ec */
  FUN_01bab8c8();
}


// ===== public void add_OnSelectedCellAction(Action<BattleRaidCell> CJNHFNHJHPE)  [RVA 0x31C784C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$add_OnSelectedCellAction @ RVA 0x31C784C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__add_OnSelectedCellAction
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Action_BattleRaidCell__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BattleRaidCell__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BattleRaidCell__o *pSVar5;
  System_Action_BattleRaidCell__o **ppSVar6;
  System_Action_BattleRaidCell__o *a;
  
                    /* try { // try from 032c7854 to 033c785b has its CatchHandler @ 032c7ae8 */
                    /* try { // try from 032c7864 to 033c786b has its CatchHandler @ 032c7b14 */
                    /* try { // try from 032c786c to 033c787b has its CatchHandler @ 032c7adc */
  if ((DAT_04566c40 & 1) == 0) {
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    DAT_04566c40 = 1;
  }
                    /* try { // try from 032c7884 to 033c788b has its CatchHandler @ 032c7aec */
  ppSVar6 = &(__this->fields).IBOMDDIAHOH;
  a = *ppSVar6;
  do {
                    /* try { // try from 032c7894 to 033c789b has its CatchHandler @ 032c7af4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BattleRaidCell>_TypeInfo;
                    /* try { // try from 032c78a0 to 033c78a7 has its CatchHandler @ 032c7b28 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032c78b0 to 033c78b7 has its CatchHandler @ 032c7af0 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BattleRaidCell>_TypeInfo);
                    /* try { // try from 032c78b8 to 033c78c7 has its CatchHandler @ 032c7ae4 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 032c78cc to 033c78eb has its CatchHandler @ 032c7b38 */
    pSVar5 = (System_Action_BattleRaidCell__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 032c78ec to 033c7acb has its CatchHandler @ 032c7344 */
  return;
}

