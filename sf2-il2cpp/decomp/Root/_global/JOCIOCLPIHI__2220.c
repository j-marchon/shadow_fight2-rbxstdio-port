// TypeDefIndex 2220
// Namespace: 
// public class JOCIOCLPIHI
// Fields:
//   public HttpListenerContext OHKEKFCKBED; // 0x10
//   public Match IAFNJPBIPAJ; // 0x18
//   public bool IPOHACONDOB; // 0x20
//   public string AAIHDEKMIJG; // 0x28
//   public int FFEODAAHJLG; // 0x30

// ===== public HttpListenerRequest AEIKKFELIDK()  [RVA 0x32ED664]
// JOCIOCLPIHI$$AEIKKFELIDK @ RVA 0x32ED664

System_Net_HttpListenerRequest_o *
JOCIOCLPIHI__AEIKKFELIDK(JOCIOCLPIHI_o *__this,MethodInfo *method)

{
  System_Net_HttpListenerContext_o *pSVar1;
  
  pSVar1 = (__this->fields).OHKEKFCKBED;
  if (pSVar1 != (System_Net_HttpListenerContext_o *)0x0) {
    return (pSVar1->fields).request;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HttpListenerContext GJBOBDKIMEF)  [RVA 0x32ED680]
// JOCIOCLPIHI$$.ctor @ RVA 0x32ED680

void JOCIOCLPIHI___ctor(JOCIOCLPIHI_o *__this,System_Net_HttpListenerContext_o *GJBOBDKIMEF,
                       MethodInfo *method)

{
  bool bVar1;
  System_Uri_o *__this_00;
  System_String_o *pSVar2;
  System_Net_HttpListenerRequest_o *pSVar3;
  System_Text_RegularExpressions_Match_o **ppSVar4;
  System_String_o **ppSVar5;
  JOCIOCLPIHI_Fields *pJVar6;
  
  if ((DAT_04567650 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_1524/*"/index.html"*/);
    DAT_04567650 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pJVar6 = &__this->fields;
  pJVar6->OHKEKFCKBED = GJBOBDKIMEF;
  thunk_FUN_01c20e04(pJVar6,GJBOBDKIMEF);
  ppSVar4 = &(__this->fields).IAFNJPBIPAJ;
  *ppSVar4 = (System_Text_RegularExpressions_Match_o *)0x0;
  thunk_FUN_01c20e04(ppSVar4,0);
  (__this->fields).IPOHACONDOB = false;
  if (((pJVar6->OHKEKFCKBED != (System_Net_HttpListenerContext_o *)0x0) &&
      (pSVar3 = (pJVar6->OHKEKFCKBED->fields).request,
      pSVar3 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (__this_00 = (pSVar3->fields).url, __this_00 != (System_Uri_o *)0x0)) {
    pSVar2 = System_Uri__get_AbsolutePath(__this_00,(MethodInfo *)0x0);
    pSVar2 = UnityEngine_Networking_UnityWebRequest__UnEscapeURL(pSVar2,(MethodInfo *)0x0);
    ppSVar5 = &(__this->fields).AAIHDEKMIJG;
    *ppSVar5 = pSVar2;
    thunk_FUN_01c20e04(ppSVar5,pSVar2);
    bVar1 = System_String__op_Equality(*ppSVar5,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
    if (bVar1) {
      *ppSVar5 = StringLiteral_1524/*"/index.html"*/;
      thunk_FUN_01c20e04(ppSVar5);
    }
    (__this->fields).FFEODAAHJLG = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HttpListenerResponse OMMFOGEHHOO()  [RVA 0x32ED778]
// JOCIOCLPIHI$$OMMFOGEHHOO @ RVA 0x32ED778

System_Net_HttpListenerResponse_o *
JOCIOCLPIHI__OMMFOGEHHOO(JOCIOCLPIHI_o *__this,MethodInfo *method)

{
  System_Net_HttpListenerContext_o *pSVar1;
  
  pSVar1 = (__this->fields).OHKEKFCKBED;
  if (pSVar1 != (System_Net_HttpListenerContext_o *)0x0) {
    return (pSVar1->fields).response;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

