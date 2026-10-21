// TypeDefIndex 1188
// Namespace: 
// [CompilerGenerated]
// private sealed class ItemsPanel.HOHHMCACAFI
// Fields:
//   public List<IGFGDDANEPE> equipedItems; // 0x10

// ===== public void .ctor()  [RVA 0x3127D0C]
// Nekki.SF2.GUI.Shop.ItemsPanel.HOHHMCACAFI$$.ctor @ RVA 0x3127D0C

void Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool HJHKHGCOMIB(HOOAAGABMBL p_itemInfo)  [RVA 0x3127D14]
// Nekki.SF2.GUI.Shop.ItemsPanel.HOHHMCACAFI$$HJHKHGCOMIB @ RVA 0x3127D14

bool Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI__HJHKHGCOMIB
               (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *__this,HOOAAGABMBL_o *p_itemInfo,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  
                    /* try { // try from 03227d20 to 03327d23 has its CatchHandler @ 03227e94 */
  if ((DAT_0456666b & 1) == 0) {
                    /* try { // try from 03227d3c to 03327d43 has its CatchHandler @ 03227f0c */
                    /* try { // try from 03227d44 to 03327d5b has its CatchHandler @ 03226e68 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_DEODPPLKFFN_GOPCDAFILKC__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_DEODPPLKFFN_TypeInfo);
                    /* try { // try from 03227d5c to 03327d73 has its CatchHandler @ 03227ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    DAT_0456666b = 1;
  }
                    /* try { // try from 03227d74 to 03327e7b has its CatchHandler @ 03226e68 */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_DEODPPLKFFN_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)p_itemInfo;
    thunk_FUN_01c20e04(pIVar1 + 1,p_itemInfo);
    __this_00 = (__this->fields).equipedItems;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

