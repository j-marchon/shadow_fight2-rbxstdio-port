// TypeDefIndex 2076
// Namespace: 
// public class JANICNLKKBO
// Fields:
//   public string FKDNIDNFEIC; // 0x10
//   public string EMCMGHAFGHL; // 0x18
//   public string DCFGAAAPAII; // 0x20

// ===== public void .ctor(Dictionary<string, object> OCMMDIHLKMH, string DHAGFGIGPFI)  [RVA 0x32BBD9C]
// JANICNLKKBO$$.ctor @ RVA 0x32BBD9C

void JANICNLKKBO___ctor(JANICNLKKBO_o *__this,
                       System_Collections_Generic_Dictionary_string__object__o *OCMMDIHLKMH,
                       System_String_o *DHAGFGIGPFI,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567499 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&StringLiteral_17996/*"email"*/);
    FUN_01bab630(&StringLiteral_18911/*"id"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567499 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (OCMMDIHLKMH != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                       StringLiteral_18911/*"id"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    pSVar3 = StringLiteral_1/*""*/;
    if (bVar1) {
      pIVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                          StringLiteral_18911/*"id"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033bbf04;
      pSVar3 = (System_String_o *)
               (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
    }
    if (__this != (JANICNLKKBO_o *)0x0) {
      (__this->fields).FKDNIDNFEIC = pSVar3;
      thunk_FUN_01c20e04();
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                         StringLiteral_17996/*"email"*/,
                         Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__)
      ;
      pSVar3 = StringLiteral_1/*""*/;
      if (bVar1) {
        pIVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)OCMMDIHLKMH,
                            StringLiteral_17996/*"email"*/,
                            Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033bbf04;
        pSVar3 = (System_String_o *)
                 (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      }
      (__this->fields).EMCMGHAFGHL = pSVar3;
      thunk_FUN_01c20e04();
      ppSVar4 = &(__this->fields).DCFGAAAPAII;
      *ppSVar4 = DHAGFGIGPFI;
      thunk_FUN_01c20e04(ppSVar4,DHAGFGIGPFI);
      return;
    }
  }
LAB_033bbf04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x32BBF08]
// JANICNLKKBO$$ToString @ RVA 0x32BBF08

System_String_o * JANICNLKKBO__ToString(JANICNLKKBO_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_0456749a & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_902/*"']"*/);
    FUN_01bab630(&StringLiteral_882/*"', Token='"*/);
    FUN_01bab630(&StringLiteral_15465/*"[FBUserData ID='"*/);
    FUN_01bab630(&StringLiteral_867/*"', Email='"*/);
    DAT_0456749a = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_15465/*"[FBUserData ID='"*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields).FKDNIDNFEIC;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_867/*"', Email='"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields).EMCMGHAFGHL;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_882/*"', Token='"*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = (__this->fields).DCFGAAAPAII;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_902/*"']"*/;
                  thunk_FUN_01c20e04();
                  pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

