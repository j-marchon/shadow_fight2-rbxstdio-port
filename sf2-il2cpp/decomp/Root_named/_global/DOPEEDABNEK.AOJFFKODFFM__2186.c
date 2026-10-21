// TypeDefIndex 2186
// Namespace: 
// [CompilerGenerated]
// private sealed class Item.AOJFFKODFFM
// Fields:
//   public string lockName; // 0x10
//   public int level; // 0x18
//   public Item <>4__this; // 0x20

// ===== internal bool MIKLGKPCBFO(HOOAAGABMBL item)  [RVA 0x32E4FD0]
// Item.AOJFFKODFFM$$MIKLGKPCBFO @ RVA 0x32E4FD0

bool Item_AOJFFKODFFM__MIKLGKPCBFO
               (Item_AOJFFKODFFM_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((item->fields)._ILHGDFFOGHP_k__BackingField != false) {
    bVar1 = System_String__op_Equality
                      ((item->fields)._ILMMODKJGFK_k__BackingField,(__this->fields).lockName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== internal void POINKPMNPCE(HOOAAGABMBL item)  [RVA 0x32E5008]
// Item.AOJFFKODFFM$$POINKPMNPCE @ RVA 0x32E5008

void Item_AOJFFKODFFM__POINKPMNPCE
               (Item_AOJFFKODFFM_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  MethodInfo *in_x4;
  
  if ((DAT_04567604 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    DAT_04567604 = 1;
  }
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((item->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073/*"RealMoneyItem"*/,
                       (MethodInfo *)0x0);
    if ((__this->fields).__4__this != (Item_o *)0x0) {
      piVar1 = &(item->fields)._JDEHPJEIOCI_k__BackingField;
      if (!bVar2) {
        piVar1 = &(__this->fields).level;
      }
      Item__MDBOKHFIOIJ((Item_o *)(ulong)bVar2,item,true,*piVar1,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E0C00]
// Item.AOJFFKODFFM$$.ctor @ RVA 0x32E0C00

void Item_AOJFFKODFFM___ctor(Item_AOJFFKODFFM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

