// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$CallIndex @ RVA 0x32BA454

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__CallIndex
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t DPJIDNBJIBG,
               int32_t GJKJICHICFN,MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_0456747e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_0456747e = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if ((__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<MenuItemButton>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x033ba4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[10].methodPtr)
              (pIVar1,(ulong)(uint)GJKJICHICFN,pIVar1->klass->vtable[10].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

