// TypeDefIndex 2184
// Namespace: 
// [CompilerGenerated]
// private sealed class Item.NDBIIBHNADN
// Fields:
//   public string name; // 0x10

// ===== internal bool KNOFOPHHICO(HOOAAGABMBL x)  [RVA 0x32E4F60]
// Item.NDBIIBHNADN$$KNOFOPHHICO @ RVA 0x32E4F60

bool Item_NDBIIBHNADN__KNOFOPHHICO
               (Item_NDBIIBHNADN_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (x->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E3E94]
// Item.NDBIIBHNADN$$.ctor @ RVA 0x32E3E94

void Item_NDBIIBHNADN___ctor(Item_NDBIIBHNADN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

