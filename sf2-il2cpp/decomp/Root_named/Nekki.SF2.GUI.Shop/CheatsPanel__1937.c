// TypeDefIndex 1937
// Namespace: Nekki.SF2.GUI.Shop
// public class CheatsPanel : MonoBehaviour
// Fields:
//   private int addMoneyCount; // 0x20
//   private int addBonusCount; // 0x24
//   private int addCurrencyCount; // 0x28
//   private GameObject cheatsButtons; // 0x30
//   public UnityEvent OnShowCheats; // 0x38
//   public UnityEvent OnHideCheats; // 0x40
//   public UnityEvent OnAddLevel; // 0x48

// ===== public void ShowCheats()  [RVA 0x326E314]
// Nekki.SF2.GUI.Shop.CheatsPanel$$ShowCheats @ RVA 0x326E314

void Nekki_SF2_GUI_Shop_CheatsPanel__ShowCheats
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void HideCheats()  [RVA 0x326E318]
// Nekki.SF2.GUI.Shop.CheatsPanel$$HideCheats @ RVA 0x326E318

void Nekki_SF2_GUI_Shop_CheatsPanel__HideCheats
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void AddMoney()  [RVA 0x326E31C]
// Nekki.SF2.GUI.Shop.CheatsPanel$$AddMoney @ RVA 0x326E31C

void Nekki_SF2_GUI_Shop_CheatsPanel__AddMoney
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void AddBonus()  [RVA 0x326E320]
// Nekki.SF2.GUI.Shop.CheatsPanel$$AddBonus @ RVA 0x326E320

void Nekki_SF2_GUI_Shop_CheatsPanel__AddBonus
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void AddLevel()  [RVA 0x326E324]
// Nekki.SF2.GUI.Shop.CheatsPanel$$AddLevel @ RVA 0x326E324

void Nekki_SF2_GUI_Shop_CheatsPanel__AddLevel
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void AddCurrency()  [RVA 0x326E328]
// Nekki.SF2.GUI.Shop.CheatsPanel$$AddCurrency @ RVA 0x326E328

void Nekki_SF2_GUI_Shop_CheatsPanel__AddCurrency
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void OpenItems()  [RVA 0x326E32C]
// Nekki.SF2.GUI.Shop.CheatsPanel$$OpenItems @ RVA 0x326E32C

void Nekki_SF2_GUI_Shop_CheatsPanel__OpenItems
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void ResetProgress()  [RVA 0x326E330]
// Nekki.SF2.GUI.Shop.CheatsPanel$$ResetProgress @ RVA 0x326E330

void Nekki_SF2_GUI_Shop_CheatsPanel__ResetProgress
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x326E334]
// Nekki.SF2.GUI.Shop.CheatsPanel$$.ctor @ RVA 0x326E334

void Nekki_SF2_GUI_Shop_CheatsPanel___ctor
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityEvent_o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567204 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567204 = 1;
    method = extraout_x1;
  }
  (__this->fields).addMoneyCount = 1000000;
  (__this->fields).addBonusCount = 1000000;
  (__this->fields).addCurrencyCount = 1000000;
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnShowCheats;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnHideCheats;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnAddLevel;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

