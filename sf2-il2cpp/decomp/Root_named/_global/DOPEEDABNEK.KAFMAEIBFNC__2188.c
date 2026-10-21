// TypeDefIndex 2188
// Namespace: 
// [CompilerGenerated]
// private sealed class Item.KAFMAEIBFNC
// Fields:
//   public FAIJGJCCKJC item; // 0x10

// ===== public void .ctor()  [RVA 0x32E03E8]
// Item.KAFMAEIBFNC$$.ctor @ RVA 0x32E03E8

void Item_KAFMAEIBFNC___ctor(Item_KAFMAEIBFNC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool CKCCDPBDBJC(FAIJGJCCKJC it)  [RVA 0x32E50C8]
// Item.KAFMAEIBFNC$$CKCCDPBDBJC @ RVA 0x32E50C8

bool Item_KAFMAEIBFNC__CKCCDPBDBJC
               (Item_KAFMAEIBFNC_o *__this,FAIJGJCCKJC_o *it,MethodInfo *method)

{
  bool bVar1;
  FAIJGJCCKJC_o *pFVar2;
  
  if ((it != (FAIJGJCCKJC_o *)0x0) &&
     (pFVar2 = (__this->fields).item, pFVar2 != (FAIJGJCCKJC_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((it->fields).super._COIPKAKHDFP_k__BackingField,
                       (pFVar2->fields).super._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

