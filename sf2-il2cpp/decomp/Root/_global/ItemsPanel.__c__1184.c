// TypeDefIndex 1184
// Namespace: 
// [Serializable]
// private sealed class ItemsPanel.<>c
// Fields:
//   public static readonly ItemsPanel.<>c <>9; // 0x0
//   public static Predicate<IGFGDDANEPE> <>9__72_0; // 0x8
//   public static Func<HOOAAGABMBL, bool> <>9__73_0; // 0x10
//   public static Func<string, bool> <>9__90_0; // 0x18

// ===== public void .ctor()  [RVA 0x3127818]
// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$.ctor @ RVA 0x3127818

void Nekki_SF2_GUI_Shop_ItemsPanel_<>c___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool DKEAODMCHIG(HOOAAGABMBL p_itemInfo)  [RVA 0x3127820]
// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$DKEAODMCHIG @ RVA 0x3127820

bool Nekki_SF2_GUI_Shop_ItemsPanel_<>c__DKEAODMCHIG
               (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *__this,HOOAAGABMBL_o *p_itemInfo,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  
                    /* try { // try from 03227824 to 03327827 has its CatchHandler @ 03227bf8 */
                    /* try { // try from 03227834 to 0332783b has its CatchHandler @ 03227cb4 */
  if ((DAT_04566667 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
                    /* try { // try from 03227850 to 03327853 has its CatchHandler @ 03227cb0 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566667 = 1;
  }
                    /* try { // try from 03227864 to 0332786f has its CatchHandler @ 03227ca4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03227878 to 03327897 has its CatchHandler @ 03227d04 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 032278a0 to 033278bf has its CatchHandler @ 03227d00 */
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 032278c0 to 033278cb has its CatchHandler @ 03227c84 */
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,p_itemInfo,(MethodInfo *)0x0);
    bVar1 = false;
    if (__this_01 != (IGFGDDANEPE_o *)0x0) {
      iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 032278d8 to 033278f3 has its CatchHandler @ 03227cf8 */
      if (iVar2 < 1) {
        bVar1 = false;
      }
      else {
        pSVar4 = (__this_01->fields).PAPANCDPPIF;
        if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_03227904;
        bVar1 = (pSVar4->fields)._size == 0;
      }
    }
    return bVar1;
  }
LAB_03227904:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03227904 to 0332790b has its CatchHandler @ 03227c9c */
  FUN_01bab8c8();
}


// ===== internal bool JGOBFMONINJ(IGFGDDANEPE p_item)  [RVA 0x3127908]
// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$JGOBFMONINJ @ RVA 0x3127908

bool Nekki_SF2_GUI_Shop_ItemsPanel_<>c__JGOBFMONINJ
               (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *__this,IGFGDDANEPE_o *p_item,MethodInfo *method
               )

{
  if (p_item != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 03227910 to 03327917 has its CatchHandler @ 03227cac */
    return (p_item->fields).OFIKEBGDMBE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3127920]
// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$.cctor @ RVA 0x3127920

void Nekki_SF2_GUI_Shop_ItemsPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 03227924 to 0332792f has its CatchHandler @ 03227c78 */
                    /* try { // try from 03227930 to 03327943 has its CatchHandler @ 03227c80 */
  if ((DAT_04566668 & 1) == 0) {
                    /* try { // try from 03227944 to 0332795b has its CatchHandler @ 03227cfc */
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    DAT_04566668 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 03227964 to 0332796f has its CatchHandler @ 03227c7c */
                    /* try { // try from 03227970 to 0332798b has its CatchHandler @ 03227cf4 */
  Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool NEPCOPEIAKL(string x)  [RVA 0x3127988]
// Nekki.SF2.GUI.Shop.ItemsPanel.<>c$$NEPCOPEIAKL @ RVA 0x3127988

bool Nekki_SF2_GUI_Shop_ItemsPanel_<>c__NEPCOPEIAKL
               (Nekki_SF2_GUI_Shop_ItemsPanel___c_o *__this,System_String_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if ((DAT_04566669 & 1) == 0) {
                    /* try { // try from 032279ac to 033279c3 has its CatchHandler @ 03227cc8 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04566669 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032279c8 to 033279df has its CatchHandler @ 03227c68 */
    thunk_FUN_01ba7564();
  }
  value = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  if (x != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(x,value,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

