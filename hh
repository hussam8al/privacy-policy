<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>سياسة الخصوصية | دفتر الديون</title>
    <link href="https://fonts.googleapis.com/css2?family=Cairo:wght@400;700&family=Inter:wght@400;700&display=swap" rel="stylesheet">
    <style>
        :root {
            --primary-color: #2563eb;
            --text-color: #1f2937;
            --bg-color: #f9fafb;
            --card-bg: #ffffff;
        }

        body {
            font-family: 'Cairo', 'Inter', sans-serif;
            line-height: 1.6;
            color: var(--text-color);
            background-color: var(--bg-color);
            margin: 0;
            padding: 0;
        }

        .container {
            max-width: 800px;
            margin: 40px auto;
            padding: 20px;
        }

        .card {
            background: var(--card-bg);
            padding: 40px;
            border-radius: 12px;
            box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);
        }

        h1 {
            color: var(--primary-color);
            border-bottom: 2px solid var(--primary-color);
            padding-bottom: 10px;
            font-size: 24px;
        }

        h2 {
            font-size: 20px;
            margin-top: 30px;
            color: #111827;
        }

        .lang-switch {
            text-align: center;
            margin-bottom: 20px;
        }

        .lang-switch button {
            background: var(--primary-color);
            color: white;
            border: none;
            padding: 10px 20px;
            border-radius: 6px;
            cursor: pointer;
            font-family: inherit;
        }

        .english-section {
            display: none;
            direction: ltr;
            text-align: left;
            font-family: 'Inter', sans-serif;
        }

        .arabic-section {
            direction: rtl;
            text-align: right;
        }

        ul {
            padding-right: 20px;
        }

        .footer {
            text-align: center;
            margin-top: 40px;
            font-size: 14px;
            color: #6b7280;
        }

        a {
            color: var(--primary-color);
            text-decoration: none;
        }

        a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>

<div class="container">
    <div class="lang-switch">
        <button onclick="toggleLang()">English Version / النسخة الإنجليزية</button>
    </div>

    <div id="arabic" class="card arabic-section">
        <h1>سياسة الخصوصية لتطبيق "دفتر الديون"</h1>
        <p><strong>تاريخ التحديث:</strong> 1 مايو 2026</p>
        
        <p>تحترم إدارة تطبيق "دفتر الديون" (AIDayn) خصوصيتك وتلتزم بحمايتها. توضح هذه السياسة كيف نقوم بجمع واستخدام وحماية بياناتك عند استخدام تطبيقنا.</p>

        <h2>1. المعلومات التي نجمعها</h2>
        <ul>
            <li><strong>معرّفات الجهاز:</strong> نقوم بإنشاء معرّف فريد لجهازك (Unique Device ID) لتتبع إحصائيات الاستخدام بشكل مجهول.</li>
            <li><strong>بيانات الاستخدام:</strong> نستخدم Firebase Analytics لتتبع التفاعل مع التطبيق لتحسين تجربة المستخدم.</li>
            <li><strong>بيانات الإعلانات:</strong> تستخدم شركة AdMob معرّف الإعلانات (Advertising ID) الخاص بجهازك لعرض إعلانات ملائمة.</li>
        </ul>

        <h2>2. خدمات الطرف الثالث</h2>
        <p>يستخدم التطبيق خدمات تابعة لجهات خارجية قد تجمع معلومات تُستخدم للتعرف عليك:</p>
        <ul>
            <li><a href="https://www.google.com/policies/privacy/" target="_blank">Google Play Services</a></li>
            <li><a href="https://support.google.com/admob/answer/6128543?hl=en" target="_blank">AdMob</a></li>
            <li><a href="https://firebase.google.com/policies/analytics" target="_blank">Google Analytics for Firebase</a></li>
        </ul>

        <h2>3. تخزين البيانات</h2>
        <p>يتم تخزين بيانات الديون والعملاء بشكل أساسي على جهازك محلياً. في حال تفعيل النسخ الاحتياطي، يتم تشفير البيانات ونقلها إلى Google Drive الخاص بك أو Firestore لضمان الحماية.</p>

        <h2>4. اتصل بنا</h2>
        <p>إذا كان لديك أي أسئلة، يرجى التواصل معنا عبر البريد الإلكتروني المذكور في صفحة التطبيق على المتجر.</p>
    </div>

    <div id="english" class="card english-section">
        <h1>Privacy Policy for "Debt Book" (AIDayn)</h1>
        <p><strong>Last Updated:</strong> May 1, 2026</p>
        
        <p>The "Debt Book" (AIDayn) team respects your privacy and is committed to protecting it. This policy explains how we collect, use, and safeguard your data.</p>

        <h2>1. Information We Collect</h2>
        <ul>
            <li><strong>Device Identifiers:</strong> We generate a unique ID for your device to track anonymous usage statistics.</li>
            <li><strong>Usage Data:</strong> We use Firebase Analytics to track app interactions to improve user experience.</li>
            <li><strong>Advertising Data:</strong> AdMob uses your device's Advertising ID to show relevant ads.</li>
        </ul>

        <h2>2. Third-Party Services</h2>
        <p>The app uses third-party services that may collect information used to identify you:</p>
        <ul>
            <li><a href="https://www.google.com/policies/privacy/" target="_blank">Google Play Services</a></li>
            <li><a href="https://support.google.com/admob/answer/6128543?hl=en" target="_blank">AdMob</a></li>
            <li><a href="https://firebase.google.com/policies/analytics" target="_blank">Google Analytics for Firebase</a></li>
        </ul>

        <h2>3. Data Storage</h2>
        <p>Debt and customer records are primarily stored locally on your device. If backup is enabled, encrypted data is synced with your Google Drive or our Firestore servers for protection.</p>

        <h2>4. Contact Us</h2>
        <p>If you have any questions, please contact us via the email listed on the app's Play Store page.</p>
    </div>

    <div class="footer">
        &copy; 2026 AIDayn App. All rights reserved.
    </div>
</div>

<script>
    function toggleLang() {
        const ar = document.getElementById('arabic');
        const en = document.getElementById('english');
        if (ar.style.display === 'none') {
            ar.style.display = 'block';
            en.style.display = 'none';
            document.documentElement.lang = 'ar';
            document.documentElement.dir = 'rtl';
        } else {
            ar.style.display = 'none';
            en.style.display = 'block';
            document.documentElement.lang = 'en';
            document.documentElement.dir = 'ltr';
        }
    }
</script>

</body>
</html>
